@class NUPixelFormat, NUIOSurface;

@interface NUGLTexture : NUGLObject <NUGLFramebufferAttachable>

@property (readonly) BOOL isSurface;
@property (readonly, nonatomic) NUIOSurface *surface;
@property (readonly, nonatomic) struct { long long width; long long height; } size;
@property (readonly, nonatomic) NUPixelFormat *format;

+ (id)textureWithIOSurface:(id)a0;

- (void)delete;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)generate:(id)a0;
- (void)ensure:(id)a0;
- (void)attachToFramebuffer:(id)a0 atPoint:(unsigned int)a1 context:(id)a2;
- (void)detachFromFramebuffer:(id)a0 atPoint:(unsigned int)a1 context:(id)a2;
- (void)read:(id)a0 block:(id /* block */)a1;
- (void)copyRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 toBuffer:(id)a1 atPoint:(struct { long long x0; long long x1; })a2 context:(id)a3;
- (id)newRenderDestination;
- (void)allocateStorage:(id)a0;
- (void)write:(id)a0 block:(id /* block */)a1;
- (void)copyRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 fromBuffer:(id)a1 atPoint:(struct { long long x0; long long x1; })a2 context:(id)a3;
- (void)copyRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 fromTexture:(id)a1 atPoint:(struct { long long x0; long long x1; })a2 context:(id)a3;
- (void)copyRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 toTexture:(id)a1 atPoint:(struct { long long x0; long long x1; })a2 context:(id)a3;
- (void)drawRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 atPoint:(struct { long long x0; long long x1; })a1 context:(id)a2;

@end
