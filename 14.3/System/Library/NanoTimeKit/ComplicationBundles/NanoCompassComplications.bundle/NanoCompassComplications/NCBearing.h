@interface NCBearing : NSObject

@property (class, readonly, nonatomic) NCBearing *idealizedBearing;

@property (nonatomic) double bearing;

+ (id)randomizedBearing;

- (id)initWithBearing:(double)a0;
- (id)initWithHeading:(id)a0;

@end
