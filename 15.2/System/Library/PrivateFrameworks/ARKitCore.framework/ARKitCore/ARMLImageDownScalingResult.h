@interface ARMLImageDownScalingResult : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageResolution;
@property (readonly, nonatomic) struct CGSize { double width; double height; } regionOfInterest;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRegion;
@property (nonatomic) struct __CVBuffer { } *undistortedPixelBuffer;

- (void)dealloc;
- (void)setPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 regionOfInterest:(struct CGSize { double x0; double x1; })a1 cropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
