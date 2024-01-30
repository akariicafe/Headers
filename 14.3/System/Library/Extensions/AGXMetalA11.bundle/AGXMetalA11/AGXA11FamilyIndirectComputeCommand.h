@class NSString;

@interface AGXA11FamilyIndirectComputeCommand : IOGPUMetalIndirectComputeCommand <MTLIndirectComputeCommandSPI> {
    struct IndirectComputeCommandEncoder { id x0; struct IndirectComputeCommandBuffer *x1; } *_encoder;
    unsigned int _index;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)getCommandType;
- (void)setKernelBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)concurrentDispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)concurrentDispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)clearBarrier;
- (struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })getStageInRegion;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (void)setComputePipelineState:(id)a0;
- (void)setBarrier;
- (void *)getKernelBufferAtIndex:(unsigned long long)a0;
- (id)dispatchThreadgroupsArguments;
- (id)dispatchThreadsArguments;
- (unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)a0;
- (BOOL)hasBarrier;
- (id)getImageBlockSize;
- (void)setImageblockWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)setStageInRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0;
- (id)initWithEncoder:(struct IndirectComputeCommandEncoder { id x0; struct IndirectComputeCommandBuffer *x1; } *)a0 withIndex:(unsigned int)a1;

@end
