@interface NCBearing : NSObject <NSCopying>

@property (class, readonly, nonatomic) NCBearing *idealizedBearing;

@property (nonatomic) double bearing;

+ (id)randomizedBearing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBearing:(double)a0;
- (id)initWithHeading:(id)a0;

@end
