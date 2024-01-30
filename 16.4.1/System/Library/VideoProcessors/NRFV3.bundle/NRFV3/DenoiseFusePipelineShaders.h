@protocol MTLComputePipelineState;

@interface DenoiseFusePipelineShaders : NSObject {
    id<MTLComputePipelineState> _downsampleInference;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
