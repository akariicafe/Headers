@class NSString;
@protocol MTLDevice;

@interface AGXA11FamilyComputeContext : IOGPUMetalComputeCommandEncoder <MTLComputeCommandEncoderSPI> {
    void *_impl;
    unsigned long long _markerID;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long dispatchType;

- (void)endEncoding;
- (unsigned int)commandBatchIdOffset;
- (void)memoryBarrierWithResources:(const id *)a0 count:(unsigned long long)a1;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)dispatchInvalidateOnly;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (unsigned long long)getDriverUniqueID;
- (void)destroyImpl;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (void)dispatchThreadsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (void)setSubstream:(unsigned int)a0;
- (void)waitForFence:(id)a0;
- (void)dispatchWaitFlush;
- (void)signalProgress:(unsigned int)a0;
- (void)executeCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)setAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (BOOL)encodeEndIf;
- (void)updateFence:(id)a0;
- (void)setIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)memoryBarrierWithScope:(unsigned long long)a0;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)deferredEndEncoding;
- (void)setFunctionTables:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)executeCommandsInBuffer:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)setFunctionTable:(id)a0 atIndex:(unsigned long long)a1;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)useHeap:(id)a0;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)encodeStartDoWhile;
- (BOOL)encodeEndDoWhile:(id)a0 offset:(unsigned long long)a1 comparison:(unsigned long long)a2 referenceValue:(unsigned int)a3;
- (BOOL)commandBatchIdRangeMin:(unsigned int *)a0 max:(unsigned int *)a1;
- (void)enableNullBufferBinds:(BOOL)a0;
- (void)setComputePipelineState:(id)a0;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setImageBlockWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)dispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)setSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)dispatchFenceOnly;
- (void)setSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)setMTLCounterSampleLocationWithBuffer:(id)a0 startIndex:(unsigned int)a1 endIndex:(unsigned int)a2;
- (BOOL)parallelExecution;
- (void)dealloc;
- (void)setParallelExecution:(BOOL)a0;
- (void)encodeStartIf:(id)a0 offset:(unsigned long long)a1 comparison:(unsigned long long)a2 referenceValue:(unsigned int)a3;
- (id)initWithCommandBuffer:(id)a0 config:(struct EncoderComputeServiceConfig { id x0; id x1; int x2; id x3; int x4; unsigned int x5; BOOL x6; BOOL x7; })a1;
- (void)setStageInRegionWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (id)reInitWithCommandBuffer:(id)a0;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (id)newKernelDebugInfo;
- (void)waitForProgress:(unsigned int)a0;
- (void)setThreadgroupDistributionModeWithClusterGroupIndex:(unsigned int)a0;
- (void)setThreadgroupDistributionMode:(long long)a0;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)insertCompressedTextureReinterpretationFlush;
- (void)setImageblockWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)dispatchFlushInvalidate;
- (void)dispatchFlushOnly;
- (void)setStageInRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0;
- (BOOL)encodeEndWhile;
- (void)encodeStartWhile:(id)a0 offset:(unsigned long long)a1 comparison:(unsigned long long)a2 referenceValue:(unsigned int)a3;
- (void)encodeStartElse;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;

@end
