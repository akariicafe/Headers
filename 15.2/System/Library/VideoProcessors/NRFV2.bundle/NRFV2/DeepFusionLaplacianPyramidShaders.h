@protocol MTLComputePipelineState;

@interface DeepFusionLaplacianPyramidShaders : NSObject {
    id<MTLComputePipelineState> _krnBoxPyramid5x5;
    id<MTLComputePipelineState> _krnBilinearPyramid;
    id<MTLComputePipelineState> _krnGaussianPyramid5SeparableH;
    id<MTLComputePipelineState> _krnGaussianPyramid5SeparableV;
    id<MTLComputePipelineState> _krnLaplacianGaussianH;
    id<MTLComputePipelineState> _krnLaplacianGaussianV;
    id<MTLComputePipelineState> _krnLaplacianGaussianVLap;
    id<MTLComputePipelineState> _krnLaplacianPyramidSubtractionPass;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
