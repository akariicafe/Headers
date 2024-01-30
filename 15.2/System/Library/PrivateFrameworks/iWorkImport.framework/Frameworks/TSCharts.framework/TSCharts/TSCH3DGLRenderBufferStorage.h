@interface TSCH3DGLRenderBufferStorage : TSCH3DRenderBufferStorage

+ (id)storage;

- (BOOL)isEqual:(id)a0;
- (void)allocateStorageWithFramebufferAttributes:(const struct FramebufferAttributes { int x0; long long x1; int x2; int x3; int x4; BOOL x5; BOOL x6; BOOL x7; } *)a0 size:(void *)a1 internalFormat:(unsigned int)a2;

@end
