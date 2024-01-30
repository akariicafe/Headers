@protocol MTLComputePipelineState;

@interface DeepFusionPreEspressoKernels : NSObject {
    id<MTLComputePipelineState> _estimateAndTuneNoise[2];
    id<MTLComputePipelineState> _yuvCopyAndBias;
    id<MTLComputePipelineState> _yuvPlanarRGBToRGBA;
    id<MTLComputePipelineState> _filterChroma;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0 networkVersion:(int)a1;

@end
