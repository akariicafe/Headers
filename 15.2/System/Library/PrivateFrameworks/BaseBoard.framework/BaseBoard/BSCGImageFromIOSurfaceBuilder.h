@class IOSurface;

@interface BSCGImageFromIOSurfaceBuilder : NSObject {
    IOSurface *_surface;
    struct CGImage { } *_image;
    BOOL _isDirty;
}

@property (readonly, nonatomic, getter=isOpaque) BOOL opaque;

- (struct CGImage { } *)buildCGImage;
- (void).cxx_destruct;
- (id)setOpaque:(BOOL)a0;
- (void)dealloc;

@end
