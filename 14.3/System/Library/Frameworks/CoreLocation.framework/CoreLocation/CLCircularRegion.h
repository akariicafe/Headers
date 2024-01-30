@interface CLCircularRegion : CLRegion

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } center;
@property (readonly, nonatomic) double radius;

+ (BOOL)supportsSecureCoding;

- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2;
- (id)initForLowPowerWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)initNearbyAllowedWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2;
- (BOOL)isLowPower;
- (void)encodeWithCoder:(id)a0;

@end
