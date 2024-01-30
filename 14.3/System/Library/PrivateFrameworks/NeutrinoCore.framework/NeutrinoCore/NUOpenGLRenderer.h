@class NSString, NUGLContext;

@interface NUOpenGLRenderer : NURenderer {
    NSString *_rendererString;
    NSString *_versionString;
}

@property (readonly, nonatomic) NUGLContext *glContext;

- (void).cxx_destruct;
- (id)name;
- (id)initWithCIContext:(id)a0 priority:(long long)a1;
- (id)initWithGLContext:(id)a0 options:(id)a1;
- (void)_renderImage:(id)a0 toTexture:(id)a1 bounds:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2 withColorSpace:(id)a3;
- (id)imageForSurface:(id)a0 options:(id)a1 owner:(id)a2;
- (id)renderDestinationForSurface:(id)a0 owner:(id)a1;
- (id)_textureForSurface:(id)a0 owner:(id)a1;

@end
