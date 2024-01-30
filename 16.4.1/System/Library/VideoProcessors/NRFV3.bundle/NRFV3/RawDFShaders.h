@protocol MTLComputePipelineState;

@interface RawDFShaders : NSObject {
    id<MTLComputePipelineState> _artifactNetworkPreprocess;
    id<MTLComputePipelineState> _artifactNetworkPostprocess;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
