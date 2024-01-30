@class NSString;
@protocol MTLDevice;

@interface MTLToolsComputeCommandEncoder : MTLToolsCommandEncoder <MTLComputeCommandEncoderSPI>

@property (readonly) unsigned long long dispatchType;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)updateFence:(id)a0;
- (void)setIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)memoryBarrierWithResources:(const id *)a0 count:(unsigned long long)a1;
- (void)useHeap:(id)a0;
- (void)waitForFence:(id)a0;
- (void)executeCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)memoryBarrierWithScope:(unsigned long long)a0;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setComputePipelineState:(id)a0;
- (void)setBytes:(const void *)a0 length:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)executeCommandsInBuffer:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)setBufferOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setImageblockWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)setSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setStageInRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0;
- (void)setSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setStageInRegionWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (void)dispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;
- (void)setIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dispatchThreadsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1;
- (id)newKernelDebugInfo;
- (void)enableNullBufferBinds:(BOOL)a0;
- (id)initWithComputeCommandEncoder:(id)a0 parent:(id)a1 descriptor:(id)a2;
- (void)setImageBlockWidth:(unsigned long long)a0 height:(unsigned long long)a1;

@end
