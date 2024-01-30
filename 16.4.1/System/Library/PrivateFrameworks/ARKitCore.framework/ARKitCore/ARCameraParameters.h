@interface ARCameraParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } imageResolution;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } focalLength;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } principalPoint;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFocalLength:(struct CGPoint { double x0; double x1; })a0 imageResolution:(struct CGSize { double x0; double x1; })a1 principalPoint:(struct CGPoint { double x0; double x1; })a2;

@end
