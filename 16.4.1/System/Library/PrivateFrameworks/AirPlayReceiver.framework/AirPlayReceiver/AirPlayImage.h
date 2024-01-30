@interface AirPlayImage : NSObject {
    struct CGSize { double width; double height; } _unadjustedSize;
    struct CGImage { } *_image;
    void *_ioSurface;
    int _imageOrientation;
    struct CGSize { double width; double height; } _scale;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) id layerContents;
@property (readonly, nonatomic) void *ioSurface;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) int imageOrientation;
@property (nonatomic) struct CGSize { double x0; double x1; } scale;

- (id)initWithData:(id)a0;
- (id)initWithContentsOfFile:(id)a0;
- (void)dealloc;
- (void)_setCGImage:(struct CGImage { } *)a0;
- (void)_setIOSurface:(void *)a0;
- (void)_setImageOrientation:(int)a0;
- (struct CGSize { double x0; double x1; })_unadjustedContentSize;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })contentsTransformForLayer:(id)a0;
- (id)initWithContentsOfFile:(id)a0 decode:(BOOL)a1;
- (id)initWithData:(id)a0 decode:(BOOL)a1;

@end
