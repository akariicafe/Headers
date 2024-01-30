@interface _UIViewCubicTimingFunction : NSObject <NSCoding, NSCopying> {
    struct CGPoint { double x; double y; } _point1;
    struct CGPoint { double x; double y; } _point2;
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } controlPoint1;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } controlPoint2;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_mediaTimingFunction;
- (id)initWithControlPoint1:(struct CGPoint { double x0; double x1; })a0 controlPoint2:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
