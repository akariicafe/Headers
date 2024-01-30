@interface _UIImageIOSurfaceContent : _UIImageContent {
    struct __IOSurface { } *_surfaceRef;
}

- (struct CGSize { double x0; double x1; })sizeInPixels;
- (BOOL)canDrawImage;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 scale:(double)a1;
- (id)description;
- (id)initWithScale:(double)a0;
- (BOOL)isEqual:(id)a0;
- (struct __IOSurface { } *)IOSurface;
- (BOOL)isIOSurface;
- (unsigned long long)hash;
- (void)dealloc;

@end
