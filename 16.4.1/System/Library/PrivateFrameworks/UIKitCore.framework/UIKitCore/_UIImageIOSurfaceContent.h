@interface _UIImageIOSurfaceContent : _UIImageContent {
    struct __IOSurface { } *_surfaceRef;
}

- (struct CGSize { double x0; double x1; })sizeInPixels;
- (BOOL)isIOSurface;
- (id)initWithScale:(double)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 scale:(double)a1;
- (id)description;
- (BOOL)canEmitDrawingCommands;
- (struct __IOSurface { } *)IOSurface;
- (BOOL)canDrawImage;

@end
