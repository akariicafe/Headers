@interface IOGPUMetalRenderCommandEncoder : IOGPUMetalCommandEncoder

- (void)memoryBarrierWithScope:(unsigned long long)a0 afterStages:(unsigned long long)a1 beforeStages:(unsigned long long)a2;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)memoryBarrierWithResources:(const id *)a0 count:(unsigned long long)a1 afterStages:(unsigned long long)a2 beforeStages:(unsigned long long)a3;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2 stages:(unsigned long long)a3;
- (void)setFragmentVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)textureBarrier;
- (void *)getVertexBufferContentsAtIndex:(unsigned long long)a0;
- (unsigned long long)getType;
- (void)setDepthStoreActionOptions:(unsigned long long)a0;
- (void)setStencilStoreActionOptions:(unsigned long long)a0;
- (void)executeCommandsInBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setFragmentAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setVertexAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (id)getRenderPipelineState;
- (void)setColorStoreActionOptions:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setVertexVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)executeCommandsInBuffer:(id)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)setTileIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)useResource:(id)a0 usage:(unsigned long long)a1 stages:(unsigned long long)a2;
- (void)setVertexIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCommandBuffer:(id)a0 descriptor:(id)a1;
- (void)useHeap:(id)a0 stages:(unsigned long long)a1;
- (void)setTileVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVertexAmplificationCount:(unsigned long long)a0 viewMappings:(const struct { unsigned int x0; unsigned int x1; } *)a1;
- (void)setStencilCleared;
- (void)setDepthCleared;
- (void)waitForFence:(id)a0 beforeStages:(unsigned long long)a1;
- (void)setFragmentIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (BOOL)isMemorylessRender;
- (void)setTileIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)updateFence:(id)a0 afterStages:(unsigned long long)a1;
- (void)setFragmentVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setVertexVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)setDepthClipModeSPI:(unsigned long long)a0;
- (void)setTileVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(BOOL)a2;
- (void)setTileAccelerationStructure:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (void)useHeap:(id)a0;
- (void)setFragmentIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1 stages:(unsigned long long)a2;
- (void)setVertexIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void *)getFragmentBufferContentsAtIndex:(unsigned long long)a0;

@end
