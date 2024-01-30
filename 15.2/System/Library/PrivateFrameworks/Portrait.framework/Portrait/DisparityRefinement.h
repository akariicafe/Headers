@class PTUtil;
@protocol MTLLibrary, MTLDeviceSPI, MTLComputePipelineState;

@interface DisparityRefinement : NSObject {
    PTUtil *_portraitUtil;
    BOOL _shadersLoaded;
    struct CGSize { double width; double height; } _disparitySize;
    struct CGSize { double width; double height; } _colorSize;
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _calcWeightsX_kernel;
    id<MTLComputePipelineState> _calcWeightsY_kernel;
    id<MTLComputePipelineState> _preprocessing_kernel;
    id<MTLComputePipelineState> _sample_kernel;
    id<MTLComputePipelineState> _antialias_kernel;
    id<MTLComputePipelineState> _passthrough_kernel;
    struct disparity_refinement_params { int radius; float weightScaling; float maxReconstructionWeight; float innerSamplingRadius; float outerSamplingRadius; int nSamples; float lumaSigma; float chromaSigma; float segmentationSigma; float disparitySigma; float accumulatedWeightT0; float accumulatedWeightT1; float aaLumaSigma; float aaChromaSigma; float aaSegmentationSigma; float aaSpatialSigma; } _config_params;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDevice:(id)a0 library:(id)a1 colorSize:(struct CGSize { double x0; double x1; })a2 disparitySize:(struct CGSize { double x0; double x1; })a3 debugRendering:(long long)a4 verbose:(BOOL)a5 gpuProfiling:(BOOL)a6 config:(id)a7;
- (int)enqueueRefinementUsingResources:(id)a0 disparityRefinementParams:(const struct disparity_refinement_params { int x0; float x1; float x2; float x3; float x4; int x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } *)a1 commandBuffer:(id)a2 inputDisparity:(id)a3 inputSegmentation:(id)a4 inputImageLuma:(id)a5 inputImageChroma:(id)a6 inputSlmParams:(id)a7;
- (int)loadShadersWithLibrary:(id)a0;
- (void)constAddUint16:(id)a0 name:(id)a1 value:(unsigned short)a2;
- (void)constAddFp16asUInt16:(id)a0 name:(id)a1 value:(float)a2;
- (void)constAddFp16x4asUInt16x4:(id)a0 name:(id)a1 value:(const float *)a2;
- (int)validateInputsWithResources:(id)a0 inputDisparity:(id)a1 inputSegmentation:(id)a2 inputImageLuma:(id)a3 inputImageChroma:(id)a4 inputSlmParams:(id)a5 outputBlurMap:(id)a6;
- (int)setOptions:(const struct disparity_refinement_params { int x0; float x1; float x2; float x3; float x4; int x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } *)a0 isPrewarm:(BOOL)a1;
- (int)enqueuePassthroughWithInputDisparity:(id)a0 commandBuffer:(id)a1 inputSlmParams:(id)a2 outputBlurMap:(id)a3;
- (int)enqueueWeightsCalcWithResources:(id)a0 commandBuffer:(id)a1 inputDisparity:(id)a2;
- (int)enqueuePreprocessingWithResources:(id)a0 commandBuffer:(id)a1 inputSegmentation:(id)a2 inputImageLuma:(id)a3 inputImageChroma:(id)a4;
- (int)enqueueSamplingWithResources:(id)a0 commandBuffer:(id)a1;
- (int)enqueueAntiAliasingWithResources:(id)a0 commandBuffer:(id)a1 inputSlmParams:(id)a2 outputBlurMap:(id)a3;
- (void)constAddFp16:(id)a0 name:(id)a1 value:(float)a2;
- (void)constAddFp16x4:(id)a0 name:(id)a1 value:(const float *)a2;

@end
