@interface MTLGPUDebugIndirectComputeCommand : MTLToolsIndirectComputeCommand {
    unsigned long long _commandIndex;
}

- (void)setKernelBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)concurrentDispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)concurrentDispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)flushBindings;
- (id)initWithIndirectComputeCommand:(id)a0 commandIndex:(unsigned long long)a1 indirectCommandBuffer:(id)a2;

@end
