@class NSMutableDictionary, NSMutableSet, MTLTelemetryDevice, MTLTelemetryCommandBuffer, MTLTelemetryRenderPipelineState;

@interface MTLTelemetryRenderCommandEncoder : MTLToolsRenderCommandEncoder {
    MTLTelemetryDevice *_telemetryDevice;
    MTLTelemetryCommandBuffer *_telemetryCommandBuffer;
    unsigned int _reDraws;
    NSMutableSet *_anisoFragmentSamplers;
    NSMutableDictionary *_clippedMip2DFragmentTextures;
    MTLTelemetryRenderPipelineState *_telemetryPipeline;
}

- (void)setViewport:(struct { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)memoryBarrierWithScope:(unsigned long long)a0 afterStages:(unsigned long long)a1 beforeStages:(unsigned long long)a2;
- (void)memoryBarrierWithResources:(const id *)a0 count:(unsigned long long)a1 afterStages:(unsigned long long)a2 beforeStages:(unsigned long long)a3;
- (void)setDepthClipMode:(unsigned long long)a0;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2 instanceCount:(unsigned long long)a3 baseInstance:(unsigned long long)a4;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(id)a3 indexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5 baseVertex:(long long)a6 baseInstance:(unsigned long long)a7;
- (void)setDepthStencilState:(id)a0;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(id)a3 indexBufferOffset:(unsigned long long)a4;
- (void)setScissorRect:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (void)setFragmentTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setRenderPipelineState:(id)a0;
- (void)drawPrimitives:(unsigned long long)a0 vertexStart:(unsigned long long)a1 vertexCount:(unsigned long long)a2;
- (void)setFragmentSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)endEncoding;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexCount:(unsigned long long)a1 indexType:(unsigned long long)a2 indexBuffer:(id)a3 indexBufferOffset:(unsigned long long)a4 instanceCount:(unsigned long long)a5;
- (void)setFragmentTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setViewports:(const struct { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 count:(unsigned long long)a1;
- (void)setScissorRects:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 count:(unsigned long long)a1;
- (void)setFragmentSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setFragmentSamplerState:(id)a0 lodMinClamp:(float)a1 lodMaxClamp:(float)a2 atIndex:(unsigned long long)a3;
- (void)setFragmentSamplerStates:(const id *)a0 lodMinClamps:(const float *)a1 lodMaxClamps:(const float *)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)drawPrimitives:(unsigned long long)a0 indirectBuffer:(id)a1 indirectBufferOffset:(unsigned long long)a2;
- (void)drawIndexedPrimitives:(unsigned long long)a0 indexType:(unsigned long long)a1 indexBuffer:(id)a2 indexBufferOffset:(unsigned long long)a3 indirectBuffer:(id)a4 indirectBufferOffset:(unsigned long long)a5;
- (id)initWithRenderCommandEncoder:(id)a0 parent:(id)a1 descriptor:(id)a2;
- (id)initWithRenderCommandEncoder:(id)a0 parent:(id)a1 commandBuffer:(id)a2 descriptor:(id)a3;
- (void)initTelemetryWithDescriptor:(id)a0 commandBuffer:(id)a1;
- (void)accumDrawWithType:(unsigned long long)a0 indexType:(unsigned long long)a1 primitiveType:(unsigned long long)a2 vertexCount:(unsigned long long)a3 instanceCount:(unsigned long long)a4;
- (void)accumViewportTelemetry:(const struct { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 count:(unsigned long long)a1;
- (void)accumScissorRectTelemetry:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 count:(unsigned long long)a1;

@end
