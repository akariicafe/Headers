@protocol MTLComputePipelineState;

@interface FigRegWarpPPGPUShaders : NSObject {
    id<MTLComputePipelineState> _downscaleImagePipeline;
    id<MTLComputePipelineState> _copyImagePipeline;
    id<MTLComputePipelineState> _boxFilterPipeline;
    id<MTLComputePipelineState> _cornerResponsePipeline;
    id<MTLComputePipelineState> _cornerDetectionFirstPass4x4Pipeline;
    id<MTLComputePipelineState> _cornerDetectionFinalPassPipeline;
    id<MTLComputePipelineState> _cornerMatchingPipeline;
    id<MTLComputePipelineState> _homographyMinSamplesSolverPipeline;
    id<MTLComputePipelineState> _affineMinSamplesSolverPipeline;
    id<MTLComputePipelineState> _rigidMinSamplesSolverPipeline;
    id<MTLComputePipelineState> _homographySolverUsingInliersPipeline;
    id<MTLComputePipelineState> _reorderCornersPipeline;
}

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
