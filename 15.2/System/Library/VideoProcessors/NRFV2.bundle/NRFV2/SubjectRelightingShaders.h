@protocol MTLComputePipelineState;

@interface SubjectRelightingShaders : NSObject {
    id<MTLComputePipelineState> _srlV2GlobalHistogram;
    id<MTLComputePipelineState> _srlV2FaceHistogram;
    id<MTLComputePipelineState> _srlV2CalcCoefficients;
    id<MTLComputePipelineState> _srlV2GlobalHistogramLivePhotos;
    id<MTLComputePipelineState> _srlV2FaceHistogramLivePhotos;
    id<MTLComputePipelineState> _srlV2CalcCoefficientsLivePhotos;
    id<MTLComputePipelineState> _srlV2Apply;
}

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
