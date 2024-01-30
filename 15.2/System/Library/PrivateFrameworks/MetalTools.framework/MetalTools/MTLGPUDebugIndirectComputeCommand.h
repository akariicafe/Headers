@interface MTLGPUDebugIndirectComputeCommand : MTLToolsIndirectComputeCommand {
    unsigned long long _commandIndex;
}

- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)dealloc;
- (void)reset;
- (void)setComputePipelineState:(id)a0;
- (void)setStageInRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0;
- (void)setKernelBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)concurrentDispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)concurrentDispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)setBarrier;
- (void)clearBarrier;
- (id)initWithIndirectComputeCommand:(id)a0 commandIndex:(unsigned long long)a1 indirectCommandBuffer:(id)a2;

@end
