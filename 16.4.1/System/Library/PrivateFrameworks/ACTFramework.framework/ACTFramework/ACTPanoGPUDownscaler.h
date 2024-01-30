@protocol MTLCommandQueue, MTLDevice, MTLComputePipelineState;

@interface ACTPanoGPUDownscaler : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _queue;
    id<MTLComputePipelineState> _downsampleState;
}

- (void)dealloc;
- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (int)downsample:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;

@end
