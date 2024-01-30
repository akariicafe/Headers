@protocol MTLComputePipelineState;

@interface WarpShaders : NSObject {
    id<MTLComputePipelineState> warpComputePipeline;
    id<MTLComputePipelineState> warpComputePipelineYCbCr;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
