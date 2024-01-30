@class PTUtil, NSString, PTGuidedFilter, PTRaytracingUtilsV2, PTMTLDropHints, NSDictionary, PTPyramidRGB, PTRaytracingInterpolateResult, PTGlobalReduction, PTQualitySettings, PTRenderDebugLayer;
@protocol MTLBuffer, MTLComputePipelineState, MTLLibrary, MTLTexture, MTLPipelineLibrary, MTLDeviceSPI;

@interface PTRaytracingV2002 : NSObject <RenderingIntegration> {
    NSDictionary *_config;
    PTPyramidRGB *_rgbaPyramid;
    PTRenderDebugLayer *_debugLayer;
    long long _debugRendering;
    PTUtil *_util;
    struct CGSize { double width; double height; } _disparitySize;
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrary> _pipelineLibrary;
    BOOL _injectedRGBAPyramid;
    struct PTFocusEdge { float width; float gradientThreshold; float gradientWeight; float minMaxThreshold; } _focusEdge;
    PTQualitySettings *_qualitySettings;
    PTRaytracingUtilsV2 *_raytracingUtils;
    PTRaytracingInterpolateResult *_raytracingInterpolateResult;
    PTGlobalReduction *_globalReduction;
    PTGuidedFilter *_guidedFilter;
    id<MTLBuffer> _aperturePointsXY;
    id<MTLBuffer> _randomUChars;
    id<MTLBuffer> _disparityDiffGlobalMinMax;
    id<MTLTexture> _disparityEdges;
    id<MTLTexture> _disparityEdgesTemp;
    id<MTLTexture> _disparityDiff;
    id<MTLTexture> _focusEdgeMask;
    id<MTLTexture> _raytracedRGBWeight;
    id<MTLTexture> _raytracedRGBWeightUpscaled;
    id<MTLTexture> _guideRGBACoefficients;
    id<MTLTexture> _guideRGBAUpscale;
    PTMTLDropHints *_disparityDiffDropHints;
    PTMTLDropHints *_dropHintsRaytracing;
    PTMTLDropHints *_dropHintsRGBWeightUpscaled;
    BOOL _doVisualization;
    int _kRayCount;
    void /* unknown type, empty encoding */ _colorSize;
    float _kCoverageOverscan;
    float _anamorphicFactor;
    float _edgeTolerance;
    id<MTLComputePipelineState> _raytracingSDOF;
    id /* block */ interpolateRGBWeightCustomFn;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)prewarm;
- (void)setResourceHeap:(id)a0;
- (unsigned long long)minimumResourceHeapSize;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 colorSize:(struct CGSize { double x0; double x1; })a3 disparitySize:(struct CGSize { double x0; double x1; })a4 debugRendering:(long long)a5 verbose:(BOOL)a6 gpuProfiling:(BOOL)a7 config:(id)a8 quality:(int)a9;
- (int)renderContinuousWithSource:(id)a0 renderRequest:(id)a1;

@end
