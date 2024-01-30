@protocol MTLComputePipelineState;

@interface WarpShaders : NSObject {
    id<MTLComputePipelineState> warpComputePipeline;
    id<MTLComputePipelineState> warpComputePipelineYCbCr;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
