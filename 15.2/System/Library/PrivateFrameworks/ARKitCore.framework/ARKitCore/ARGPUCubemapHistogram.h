@protocol MTLCommandQueue, MTLDevice, MTLComputePipelineState;

@interface ARGPUCubemapHistogram : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _cubemapHistogramPipelineState;
    BOOL _gpuFamilyAtleast4;
}

- (void).cxx_destruct;
- (id)init;
- (struct ARLabHistogram { float x0; float x1[4][8][8]; })colorHistogramForCubemap:(id)a0;

@end
