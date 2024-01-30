@class MTLCountersTraceResourceStateCommandEncoder;

@interface MTLCountersResourceStateCommandEncoder : MTLToolsResourceStateCommandEncoder {
    MTLCountersTraceResourceStateCommandEncoder *_traceEncoder;
}

- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (void)updateFence:(id)a0;
- (void)waitForFence:(id)a0;
- (void)insertDebugSignpost:(id)a0;
- (void)endEncoding;
- (void)dealloc;
- (void)setLabel:(id)a0;
- (void)updateTextureMappings:(id)a0 mode:(unsigned long long)a1 regions:(const struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } *)a2 mipLevels:(const unsigned long long *)a3 slices:(const unsigned long long *)a4 numRegions:(unsigned long long)a5;
- (void)updateTextureMapping:(id)a0 mode:(unsigned long long)a1 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 mipLevel:(unsigned long long)a3 slice:(unsigned long long)a4;
- (void)updateTextureMapping:(id)a0 mode:(unsigned long long)a1 indirectBuffer:(id)a2 indirectBufferOffset:(unsigned long long)a3;
- (void)copyMappingStateFromTexture:(id)a0 mipLevel:(unsigned long long)a1 slice:(unsigned long long)a2 toBuffer:(id)a3 offset:(unsigned long long)a4 numTiles:(unsigned long long)a5;
- (id)initWithResourceStateCommandEncoder:(id)a0 commandBuffer:(id)a1;

@end
