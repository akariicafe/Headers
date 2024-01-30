@interface VNPoint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) VNPoint *zeroPoint;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGPoint { double x0; double x1; } location;
@property (readonly) double x;
@property (readonly) double y;

+ (id)pointByApplyingVector:(id)a0 toPoint:(id)a1;
+ (double)distanceBetweenPoint:(id)a0 point:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (double)distanceToPoint:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithX:(double)a0 y:(double)a1;
- (void)encodeWithCoder:(id)a0;

@end
