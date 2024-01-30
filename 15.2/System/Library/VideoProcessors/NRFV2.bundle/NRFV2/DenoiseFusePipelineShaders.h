@protocol MTLComputePipelineState;

@interface DenoiseFusePipelineShaders : NSObject {
    id<MTLComputePipelineState> _redFaceFix;
    id<MTLComputePipelineState> _pickRandomSamples;
    id<MTLComputePipelineState> _adjustEvmPyramidColor;
    id<MTLComputePipelineState> _downsampleInference;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
