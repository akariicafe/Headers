@protocol MTLBuffer, MTLDevice, MTLCommandQueue, MTLComputePipelineState;

@interface AR2DSkeletonDetectionPostProcessGPU : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _pipelineStateInterpolate;
    id<MTLComputePipelineState> _pipelineStateMaxFilter;
    id<MTLBuffer> _input;
    id<MTLBuffer> _intermediate;
    id<MTLBuffer> _output;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void /* unknown type, blank encoding */ *)process:(struct __IOSurface { } *)a0 counter:(unsigned int *)a1 shape:(struct CGSize { double x0; double x1; })a2;

@end
