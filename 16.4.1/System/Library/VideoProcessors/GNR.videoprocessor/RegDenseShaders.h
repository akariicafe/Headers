@protocol MTLComputePipelineState, MTLRenderPipelineState;

@interface RegDenseShaders : NSObject {
    id<MTLRenderPipelineState> _confPipeline;
    id<MTLComputePipelineState> _warpPipeline;
    id<MTLComputePipelineState> _warpWithConfidencePipeline;
    id<MTLComputePipelineState> _warpWithBlendingWeightPipeline;
    id<MTLComputePipelineState> _getBlendingWeightPipeline;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
