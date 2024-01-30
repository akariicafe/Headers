@class NUIOSurface;

@interface _NUGLIOSurfaceTexture : NUGLTexture {
    NUIOSurface *_surface;
}

- (void).cxx_destruct;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (id)surface;
- (id)initWithIOSurface:(id)a0;
- (BOOL)isSurface;
- (void)allocateStorage:(id)a0;

@end
