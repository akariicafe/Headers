@interface _PKStrokeClipPlane : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } origin;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } normal;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)distanceToPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToClipPlane:(id)a0;
- (id)initWithOrigin:(struct CGPoint { double x0; double x1; })a0 normal:(struct CGPoint { double x0; double x1; })a1;

@end
