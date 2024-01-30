@interface MTLIOAccelResourceStateCommandEncoder : MTLIOAccelCommandEncoder

- (void)updateTextureMappings:(id)a0 mode:(unsigned long long)a1 regions:(const struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } *)a2 mipLevels:(const unsigned long long *)a3 slices:(const unsigned long long *)a4 numRegions:(unsigned long long)a5;
- (void)updateTextureMapping:(id)a0 mode:(unsigned long long)a1 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 mipLevel:(unsigned long long)a3 slice:(unsigned long long)a4;
- (void)updateTextureMapping:(id)a0 mode:(unsigned long long)a1 indirectBuffer:(id)a2 indirectBufferOffset:(unsigned long long)a3;
- (unsigned long long)getType;

@end
