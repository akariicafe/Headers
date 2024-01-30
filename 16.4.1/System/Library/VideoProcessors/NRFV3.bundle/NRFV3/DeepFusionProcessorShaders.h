@protocol MTLComputePipelineState;

@interface DeepFusionProcessorShaders : NSObject {
    id<MTLComputePipelineState> _copyTextureKernel;
    id<MTLComputePipelineState> _computeAMBNRBoostMapKernel;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
