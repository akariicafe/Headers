@protocol MTLComputePipelineState, MTLRenderPipelineState;

@interface RegDenseShaders : NSObject {
    id<MTLRenderPipelineState> _confPipeline;
    id<MTLComputePipelineState> _warpPipeline;
    id<MTLComputePipelineState> _warpWithConfidencePipeline;
    id<MTLComputePipelineState> _warpWithBlendingWeightPipeline;
    id<MTLComputePipelineState> _warpAdditionalFrameWithBlendingWeightPipeline;
    id<MTLComputePipelineState> _warpWithBlendingWeightAndConfidencePipeline;
    id<MTLComputePipelineState> _getBlendingWeightPipeline;
    id<MTLComputePipelineState> _getBlendingWeightLowLightPipeline;
    id<MTLComputePipelineState> _generateSparseBlendingMapPipeline;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
