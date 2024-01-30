@class PTUtil, PTMTLDropHints, PTRaytracingUtilsV2;
@protocol MTLComputePipelineState, MTLTexture;

@interface PTGuidedFilter : NSObject {
    id<MTLComputePipelineState> _computeWeightedUpsamplingCoefficients;
    id<MTLComputePipelineState> _computeUpsamplingCoefficients;
    id<MTLComputePipelineState> _averageUpsamplingCoefficients;
    id<MTLComputePipelineState> _applyUpsamplingCoefficients;
    id<MTLTexture> _coeffTexture;
    id<MTLTexture> _edges;
    id<MTLTexture> _coeffAveragedTexture;
    id<MTLTexture> _upscaledTexture;
    PTMTLDropHints *_textureDropHints;
    PTRaytracingUtilsV2 *_utils;
    PTUtil *_u;
    BOOL _useWeightedSampling;
    float _edgeTolerance;
    BOOL _useHighresGuideForComputingCoefficients;
    BOOL _skipBoxFilter;
}

- (id)edges;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 imageSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 scale:(float)a4 epsilon:(float)a5;
- (id)upscaledTexture;
- (void)applyUpsamplingCoefficients:(id)a0 guideTexture:(id)a1 coeffTexture:(id)a2 upsampledTexture:(id)a3 guideMultiplier:(float)a4;
- (void)averageUpsamplingCoefficients:(id)a0 coeffTexture:(id)a1 coeffAveragedTexture:(id)a2;
- (void)computeUpsamplingCoefficients:(id)a0 guideTexture:(id)a1 imageTexture:(id)a2 coeffTexture:(id)a3 weights:(id)a4 guideMultiplier:(float)a5;
- (int)guidedFilter:(id)a0 image:(id)a1 guideRGBACoefficients:(id)a2 guideRGBAUpscale:(id)a3 sourceColorBitDepth:(int)a4;

@end
