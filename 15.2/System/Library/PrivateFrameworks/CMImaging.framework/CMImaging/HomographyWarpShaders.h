@protocol MTLComputePipelineState;

@interface HomographyWarpShaders : NSObject {
    id<MTLComputePipelineState> warpComputePipeline;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
