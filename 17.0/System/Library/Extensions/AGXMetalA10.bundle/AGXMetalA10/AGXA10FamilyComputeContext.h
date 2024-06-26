@class NSString;
@protocol MTLDevice;

@interface AGXA10FamilyComputeContext : IOGPUMetalComputeCommandEncoder <MTLComputeCommandEncoderSPI> {
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

- (void)waitForFence:(id)a0;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (void)setFunctionTable:(id)a0 atIndex:(unsigned long long)a1;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)executeCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setComputePipelineState:(id)a0;
- (void)setIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)updateFence:(id)a0;
- (void)memoryBarrierWithResources:(const id *)a0 count:(unsigned long long)a1;
- (void)setAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setFunctionTables:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)memoryBarrierWithScope:(unsigned long long)a0;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)executeCommandsInBuffer:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)setIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;
- (void)useHeap:(id)a0;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)dispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)endEncoding;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 attributeStride:(unsigned long long)a2 atIndex:(unsigned long long)a3;
- (void)setBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setBufferOffset:(unsigned long long)a0 attributeStride:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 attributeStrides:(const unsigned long long *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 attributeStride:(unsigned long long)a2 atIndex:(unsigned long long)a3;
- (void)setImageblockWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setStageInRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0;
- (void)setStageInRegionWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setThreadgroupDistributionMode:(long long)a0;
- (void)signalProgress:(unsigned int)a0;
- (void)beginVirtualSubstream;
- (void)endVirtualSubstream;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (unsigned long long)getDriverUniqueID;
- (unsigned long long)nextVirtualSubstream;
- (void)setSubstream:(unsigned int)a0;
- (void)setThreadgroupDistributionModeWithClusterGroupIndex:(unsigned int)a0;
- (void)waitForProgress:(unsigned int)a0;
- (void)waitForVirtualSubstream:(unsigned long long)a0;
- (BOOL)encodeEndWhile;
- (void)encodeStartWhile:(id)a0 offset:(unsigned long long)a1 comparison:(unsigned long long)a2 referenceValue:(unsigned int)a3;
- (void)encodeStartElse;
- (void)dispatchThreadsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (void)enableNullBufferBinds:(BOOL)a0;
- (BOOL)encodeEndDoWhile:(id)a0 offset:(unsigned long long)a1 comparison:(unsigned long long)a2 referenceValue:(unsigned int)a3;
- (BOOL)encodeEndIf;
- (void)encodeStartDoWhile;
- (void)encodeStartIf:(id)a0 offset:(unsigned long long)a1 comparison:(unsigned long long)a2 referenceValue:(unsigned int)a3;
- (void)insertCompressedTextureReinterpretationFlush;
- (id)newKernelDebugInfo;
- (void)setImageBlockWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (unsigned int)commandBatchIdOffset;
- (BOOL)commandBatchIdRangeMin:(unsigned int *)a0 max:(unsigned int *)a1;
- (void)deferredEndEncoding;
- (void)destroyImpl;
- (void)dispatchFenceOnly;
- (void)dispatchFlushInvalidate;
- (void)dispatchFlushOnly;
- (void)dispatchInvalidateOnly;
- (void)dispatchWaitFlush;
- (id)initWithCommandBuffer:(id)a0 config:(struct EncoderComputeServiceConfig { id x0; id x1; id x2; int x3; id x4; int x5; unsigned int x6; BOOL x7; BOOL x8; })a1;
- (BOOL)parallelExecution;
- (id)reInitWithCommandBuffer:(id)a0;
- (BOOL)setMTLCounterSampleLocationWithBuffer:(id)a0 startIndex:(unsigned int)a1 endIndex:(unsigned int)a2;
- (void)setParallelExecution:(BOOL)a0;

@end
