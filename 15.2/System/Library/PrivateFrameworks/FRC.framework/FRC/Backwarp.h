@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState;

@interface Backwarp : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _mtlLibrary;
    id<MTLComputePipelineState> _backwarpKernel;
    id<MTLComputePipelineState> _backwarpLossKernel;
    id<MTLComputePipelineState> _flowUpscaleKernel;
    id<MTLComputePipelineState> _subsampleFlowKernel;
    id<MTLComputePipelineState> _subsampleErrorKernel;
    id<MTLComputePipelineState> _upscaleErrorKernel;
    id<MTLComputePipelineState> _subsampleInputKernel;
    id<MTLComputePipelineState> _padTextureKernel;
    id<MTLComputePipelineState> _reverseFlowKernel;
    BOOL _interleaved;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)setupMetal;
- (id)initWithDevice:(id)a0 interleaved:(BOOL)a1;
- (void)encodeBackwarpLossToCommandBuffer:(id)a0 first:(id)a1 second:(id)a2 flow:(id)a3 timeScale:(float)a4 destination:(id)a5;
- (void)encodeUpscaleFlowToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 source:(id)a1 flow:(id)a2 destination:(id)a3 upscaledFlow:(id)a4;
- (void)encodeSubsampleToCommandBufferr:(id)a0 source:(id)a1 destination:(id)a2 kernel:(id)a3;
- (void)encodePaddingTextureToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeReverseFlowToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)warpImage:(id)a0 to:(id)a1 withFlow:(id)a2 upscaledFlow:(id)a3;
- (void)calcBackwarpLoss:(id)a0 second:(id)a1 flow:(id)a2 timeScale:(float)a3 destination:(id)a4;
- (void)upscaleFlow:(id)a0 destination:(id)a1;
- (void)encodeSubsampleFlowToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeSubsampleErrorToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeUpscaleErrorToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeSubsampleInputToCommandBufferr:(id)a0 source:(id)a1 destination:(id)a2;
- (void)copyTextureWithPaddingSource:(id)a0 destination:(id)a1;
- (void)reverseFlowWithSource:(id)a0 destination:(id)a1;

@end
