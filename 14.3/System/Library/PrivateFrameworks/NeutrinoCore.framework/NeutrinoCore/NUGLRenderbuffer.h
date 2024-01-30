@class NUPixelFormat;
@protocol EAGLDrawable;

@interface NUGLRenderbuffer : NUGLObject <NUGLFramebufferAttachable> {
    id<EAGLDrawable> _drawable;
}

@property (readonly, nonatomic) struct { long long width; long long height; } size;
@property (readonly, nonatomic) NUPixelFormat *format;

- (void)delete;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)generate:(id)a0;
- (void)attachToFramebuffer:(id)a0 atPoint:(unsigned int)a1 context:(id)a2;
- (void)detachFromFramebuffer:(id)a0 atPoint:(unsigned int)a1 context:(id)a2;
- (id)initWithDrawable:(id)a0;
- (void)flushDrawableWithContext:(id)a0;
- (void)draw:(id)a0 block:(id /* block */)a1;
- (void)read:(id)a0 block:(id /* block */)a1;
- (void)copyRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 toBuffer:(id)a1 atPoint:(struct { long long x0; long long x1; })a2 context:(id)a3;

@end
