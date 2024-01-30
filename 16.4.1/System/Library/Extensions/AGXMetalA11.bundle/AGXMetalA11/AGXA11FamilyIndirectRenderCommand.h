@class NSString;

@interface AGXA11FamilyIndirectRenderCommand : IOGPUMetalIndirectRenderCommand <MTLIndirectRenderCommandSPI> {
    void *_encoder;
    unsigned int _index;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawMeshThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(id)a3 indexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseVertex:(long long)a6 baseInstance:(unsigned long long)a7;
- (void)setVertexBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setMeshBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setRenderPipelineState:(id)a0;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)drawMeshThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2 instanceCount:(unsigned long long)a3 baseInstance:(unsigned long long)a4;
- (void)setObjectBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setFragmentBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)reset;
- (id)drawArguments;
- (id)drawIndexedArguments;
- (void)drawIndexedPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 controlPointIndexBuffer:(id)a5 controlPointIndexBufferOffset:(unsigned long long)a6 instanceCount:(unsigned long long)a7 baseInstance:(unsigned long long)a8 tessellationFactorBuffer:(id)a9 tessellationFactorBufferOffset:(unsigned long long)a10 tessellationFactorBufferInstanceStride:(unsigned long long)a11;
- (void)drawIndexedPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 controlPointIndexBuffer:(id)a5 controlPointIndexBufferOffset:(unsigned long long)a6 instanceCount:(unsigned long long)a7 baseInstance:(unsigned long long)a8 tessellationFactorBuffer:(id)a9 tessellationFactorBufferOffset:(unsigned long long)a10 tessellationFactorBufferInstanceStride:(unsigned long long)a11 tessellationFactorBufferScale:(float)a12;
- (id)drawIndexedPatchesArguments;
- (void)drawPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseInstance:(unsigned long long)a6 tessellationFactorBuffer:(id)a7 tessellationFactorBufferOffset:(unsigned long long)a8 tessellationFactorBufferInstanceStride:(unsigned long long)a9;
- (void)drawPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseInstance:(unsigned long long)a6 tessellationFactorBuffer:(id)a7 tessellationFactorBufferOffset:(unsigned long long)a8 tessellationFactorBufferInstanceStride:(unsigned long long)a9 tessellationFactorBufferScale:(float)a10;
- (id)drawPatchesArguments;
- (unsigned long long)getCommandType;
- (void *)getFragmentBufferAtIndex:(unsigned long long)a0;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (id)getTessellationFactorArguments;
- (void *)getVertexBufferAtIndex:(unsigned long long)a0;
- (id)getPipelineState;
- (id)initWithEncoder:(void *)a0 withIndex:(unsigned int)a1;
- (void)setFragmentArguments:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setTileArguments:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setVertexArguments:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;

@end
