@interface ECEFCoordinate : NSObject

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

+ (id)fromLatLon:(id)a0;

- (id)initFromLatLon:(id)a0;
- (id)init;
- (void)setFromLatLon:(id)a0;
- (id)initWithX:(double)a0 y:(double)a1 z:(double)a2;
- (struct point_xy<double, boost::geometry::cs::cartesian> { double x0[2]; })toBoostEnuWithLatLonOrigin:(id)a0 andEcefOrigin:(id)a1 usingENU:(id)a2;
- (void)setFromX:(double)a0 y:(double)a1 z:(double)a2;

@end
