@class PTColor, NSString, DisparityRefinement, SDOFResources, BlurMapSmoothing, PTRenderDebugLayer;
@protocol MTLBuffer, MTLLibrary, MTLTexture, MTLComputePipelineState, MTLDeviceSPI;

@interface PTPortraitStillSDOF : NSObject <RenderingIntegration> {
    PTColor *_portraitColor;
    PTRenderDebugLayer *_debugLayer;
    long long _debugRendering;
    id<MTLComputePipelineState> _singlePassSDOF;
    id<MTLComputePipelineState> _singlePassSDOF_RGBA;
    id<MTLComputePipelineState> _makeBlurmap;
    id<MTLComputePipelineState> _makeSignedBlurmap;
    id<MTLComputePipelineState> _preprocess;
    id<MTLComputePipelineState> _preprocessHalf;
    id<MTLComputePipelineState> _preprocessScaled;
    id<MTLComputePipelineState> _sparseSamplingNoAlpha;
    id<MTLComputePipelineState> _sparserendering_sample_noAlphaSignedBlurmap;
    id<MTLComputePipelineState> _sparseSamplingPreFilterX;
    id<MTLComputePipelineState> _sparseSamplingPreFilterY;
    id<MTLComputePipelineState> _sparseSamplingAntialiasX;
    id<MTLComputePipelineState> _sparseSamplingAntialiasY;
    id<MTLComputePipelineState> _sparseSamplingAntialiasXSignedBlurmap;
    id<MTLComputePipelineState> _sparseSamplingAntialiasYSignedBlurmap;
    id<MTLComputePipelineState> _sparserendering_yuv_out_1_SignedBlurmap;
    id<MTLComputePipelineState> _sparserendering_yuv_out_2_SignedBlurmap;
    id<MTLComputePipelineState> _paintSharpPixels;
    id<MTLComputePipelineState> _paintSharpPixelsSignedBlurmap;
    id<MTLComputePipelineState> _sparse;
    struct CGSize { double width; double height; } _disparitySize;
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLBuffer> _segmentStepLUT;
    id<MTLBuffer> _segmentBaseVecLUT;
    id<MTLTexture> _blurmap;
    unsigned int _rgbaDownsampleScale;
    id<MTLTexture> _inColorLuma;
    id<MTLTexture> _inColorChroma;
    id<MTLTexture> _processingSizeRGBA1;
    id<MTLTexture> _processingSizeRGBA2;
    id<MTLTexture> _halfResRG;
    id<MTLTexture> _outColorLuma;
    id<MTLTexture> _outColorChroma;
    struct rendering_dynamic_params { void /* unknown type, blank encoding */ shapeObstructionCoeff; void /* unknown type, blank encoding */ xhlrbBlurThresholdM; void /* unknown type, blank encoding */ xhlrbBlurThresholdC; void /* unknown type, blank encoding */ xhlrbPreFilterGain; void /* unknown type, blank encoding */ xhlrbWeightGain; void /* unknown type, blank encoding */ xhlrbIntensityGain; void /* unknown type, blank encoding */ lumaNoiseAmplitude; } _dynamicRenderingParams;
    BlurMapSmoothing *_blurmapSmoothing;
    BOOL _computeDisparityRefinement;
    SDOFResources *_sdofResources;
    DisparityRefinement *_disparityRefinement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)prewarm;
- (void).cxx_destruct;
- (id)createRenderStateWithQuality:(int)a0;
- (unsigned long long)numRings;
- (void)makeBlurMap:(SEL)a0 inDisparity:(id)a1 focusDistanceDisparity:(id)a2 fNumber:(float)a3 disparityMinMax:(float)a4;
- (void)preprocess:(id)a0 inputLuma:(id)a1 inputChroma:(id)a2 blurmap:(id)a3 rgbaDownsampleScale:(unsigned int)a4;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 colorSize:(struct CGSize { double x0; double x1; })a3 disparitySize:(struct CGSize { double x0; double x1; })a4 debugRendering:(long long)a5 verbose:(BOOL)a6 gpuProfiling:(BOOL)a7 config:(id)a8;
- (int)renderContinuousWithSource:(id)a0 renderRequest:(id)a1;
- (unsigned long long)minimumResourceHeapSize;
- (void)setResourceHeap:(id)a0;
- (id)intermediateTextures;
- (void)preprocess:(id)a0 inputRGBA:(id)a1 blurmap:(id)a2 rgbaDownsampleScale:(unsigned int)a3;

@end
