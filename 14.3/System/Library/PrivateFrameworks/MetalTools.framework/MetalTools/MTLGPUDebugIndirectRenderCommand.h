@interface MTLGPUDebugIndirectRenderCommand : MTLToolsIndirectRenderCommand {
    unsigned long long _commandIndex;
}

- (void)drawIndexedPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 controlPointIndexBuffer:(id)a5 controlPointIndexBufferOffset:(unsigned long long)a6 instanceCount:(unsigned long long)a7 baseInstance:(unsigned long long)a8 tessellationFactorBuffer:(id)a9 tessellationFactorBufferOffset:(unsigned long long)a10 tessellationFactorBufferInstanceStride:(unsigned long long)a11;
- (void)dealloc;
- (void)setFragmentBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setVertexBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setRenderPipelineState:(id)a0;
- (id)initWithIndirectRenderCommand:(id)a0 commandIndex:(unsigned long long)a1 indirectCommandBuffer:(id)a2;

@end
