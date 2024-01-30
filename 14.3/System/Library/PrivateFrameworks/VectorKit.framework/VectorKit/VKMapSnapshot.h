@class VKCamera;

@interface VKMapSnapshot : NSObject <NSSecureCoding> {
    unsigned long long _width;
    unsigned long long _height;
    VKCamera *_camera;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGImage { } *image;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (struct { double x0; double x1; })coordinateForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)description;
- (id)imageSurface;
- (struct CGPoint { double x0; double x1; })pointForCoordinate:(struct { double x0; double x1; })a0;
- (id)imageDataInFormat:(unsigned long long)a0;
- (id)_initWithImage:(struct CGImage { } *)a0 scale:(double)a1 camera:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
