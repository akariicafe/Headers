@class IOSurface;

@interface BSCGImageFromIOSurfaceBuilder : NSObject {
    IOSurface *_surface;
    struct CGImage { } *_image;
    BOOL _isDirty;
}

@property (readonly, nonatomic, getter=isOpaque) BOOL opaque;

- (id)setOpaque:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (struct CGImage { } *)buildCGImage;

@end
