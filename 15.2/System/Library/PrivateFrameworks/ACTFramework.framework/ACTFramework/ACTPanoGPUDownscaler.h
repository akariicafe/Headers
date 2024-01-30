@protocol MTLCommandQueue, MTLDevice, MTLComputePipelineState;

@interface ACTPanoGPUDownscaler : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _queue;
    id<MTLComputePipelineState> _downsampleState;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (int)downsample:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;

@end
