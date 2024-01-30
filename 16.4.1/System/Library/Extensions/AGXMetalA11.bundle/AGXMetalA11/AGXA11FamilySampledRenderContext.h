@interface AGXA11FamilySampledRenderContext : AGXA11FamilyRenderContext {
    void *_sampled_impl;
}

- (void)destroyImpl;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 withRenderTargetArrayIndex:(unsigned int)a2;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (void)drawPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseInstance:(unsigned long long)a6;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)initWithCommandBuffer:(id)a0 descriptor:(id)a1 subEncoderIndex:(unsigned long long)a2 framebuffer:(void *)a3 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a4 capacity:(unsigned long long)a5;
- (void)drawPatches:(unsigned long long)a0 patchIndexBuffer:(id)a1 patchIndexBufferOffset:(unsigned long long)a2 indirectBuffer:(id)a3 indirectBufferOffset:(unsigned long long)a4;
- (void)drawMeshThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(id)a3 indexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseVertex:(long long)a6 baseInstance:(unsigned long long)a7;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2;
- (void)setRenderPipelineState:(id)a0;
- (void)dealloc;
- (void)drawIndexedPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 controlPointIndexBuffer:(id)a5 controlPointIndexBufferOffset:(unsigned long long)a6 instanceCount:(unsigned long long)a7 baseInstance:(unsigned long long)a8;
- (void)drawMeshThreadgroupsWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;
- (void)drawMeshThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2 instanceCount:(unsigned long long)a3 baseInstance:(unsigned long long)a4;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(id)a3 indexBufferOffset:(unsigned long long)a4;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(id)a3 indexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexType:(unsigned long long)a1 indexBuffer:(id)a2 indexBufferOffset:(unsigned long long)a3 indirectBuffer:(id)a4 indirectBufferOffset:(unsigned long long)a5;
- (void)drawPrimitives:(unsigned long long)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)drawIndexedPatches:(unsigned long long)a0 patchIndexBuffer:(id)a1 patchIndexBufferOffset:(unsigned long long)a2 controlPointIndexType:(unsigned long long)a3 controlPointIndexBuffer:(id)a4 controlPointIndexBufferOffset:(unsigned long long)a5 indirectBuffer:(id)a6 indirectBufferOffset:(unsigned long long)a7;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2 instanceCount:(unsigned long long)a3;

@end
