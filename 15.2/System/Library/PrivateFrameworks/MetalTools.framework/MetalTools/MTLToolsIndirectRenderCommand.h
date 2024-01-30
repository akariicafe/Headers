@class NSString;

@interface MTLToolsIndirectRenderCommand : MTLToolsObject <MTLIndirectRenderCommandSPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2 instanceCount:(unsigned long long)a3 baseInstance:(unsigned long long)a4;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(id)a3 indexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseVertex:(long long)a6 baseInstance:(unsigned long long)a7;
- (void)setFragmentBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setVertexBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setRenderPipelineState:(id)a0;
- (void)reset;
- (void)drawPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseInstance:(unsigned long long)a6 tessellationFactorBuffer:(id)a7 tessellationFactorBufferOffset:(unsigned long long)a8 tessellationFactorBufferInstanceStride:(unsigned long long)a9;
- (void)drawIndexedPatches:(unsigned long long)a0 patchStart:(unsigned long long)a1 patchCount:(unsigned long long)a2 patchIndexBuffer:(id)a3 patchIndexBufferOffset:(unsigned long long)a4 controlPointIndexBuffer:(id)a5 controlPointIndexBufferOffset:(unsigned long long)a6 instanceCount:(unsigned long long)a7 baseInstance:(unsigned long long)a8 tessellationFactorBuffer:(id)a9 tessellationFactorBufferOffset:(unsigned long long)a10 tessellationFactorBufferInstanceStride:(unsigned long long)a11;
- (void *)getVertexBufferAtIndex:(unsigned long long)a0;
- (void *)getFragmentBufferAtIndex:(unsigned long long)a0;
- (unsigned long long)getCommandType;
- (id)drawArguments;
- (id)drawIndexedArguments;
- (id)drawPatchesArguments;
- (id)drawIndexedPatchesArguments;
- (id)getTessellationFactorArguments;
- (unsigned long long)getOptimizedStatus;
- (unsigned long long)getPipelineStateUniqueIdentifier;

@end
