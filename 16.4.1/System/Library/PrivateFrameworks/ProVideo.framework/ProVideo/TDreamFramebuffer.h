@interface TDreamFramebuffer : NSObject {
    BOOL _ownsTexture;
    BOOL _ownsFBO;
    struct __CVOpenGLESTextureCache { } *_textureCache;
}

@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) unsigned int texture;
@property (readonly) unsigned int framebuffer;
@property (readonly) BOOL validLUT;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)generateFramebuffer;
- (void)generateFramebufferTex:(id)a0;
- (id)initWithExistingImageTexture:(struct IPImage { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; float x2; float x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; })a0;
- (id)initWithTexName:(id)a0;

@end
