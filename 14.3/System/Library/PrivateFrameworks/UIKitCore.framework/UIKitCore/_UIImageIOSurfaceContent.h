@interface _UIImageIOSurfaceContent : _UIImageContent {
    struct __IOSurface { } *_surfaceRef;
}

- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)initWithScale:(double)a0;
- (void)dealloc;
- (BOOL)isIOSurface;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)canProvideCGImage;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 scale:(double)a1;
- (struct __IOSurface { } *)IOSurface;

@end
