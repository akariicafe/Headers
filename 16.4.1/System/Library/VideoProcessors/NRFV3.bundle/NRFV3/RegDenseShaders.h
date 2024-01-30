@protocol MTLComputePipelineState, MTLRenderPipelineState;

@interface RegDenseShaders : NSObject {
    id<MTLRenderPipelineState> _confPipeline;
    id<MTLComputePipelineState> _warpPipeline[2];
    id<MTLComputePipelineState> _warpWithConfidencePipeline[2];
    id<MTLComputePipelineState> _warpWithBlendingWeightPipeline[2];
    id<MTLComputePipelineState> _warpAdditionalFrameWithBlendingWeightPipeline[2];
    id<MTLComputePipelineState> _warpWithBlendingWeightAndConfidencePipeline[2];
    id<MTLComputePipelineState> _warpRGBAWithBlendingWeightAndConfidencePipeline[2];
    id<MTLComputePipelineState> _getBlendingWeightPipeline;
    id<MTLComputePipelineState> _getBlendingWeightLowLightPipeline;
    id<MTLComputePipelineState> _generateSparseBlendingMapPipeline;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
