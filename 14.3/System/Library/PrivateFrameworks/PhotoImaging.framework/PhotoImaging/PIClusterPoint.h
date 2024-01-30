@interface PIClusterPoint : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, nonatomic) double value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCGPoint:(struct CGPoint { double x0; double x1; })a0 value:(double)a1;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isEqualToPoint:(id)a0;

@end
