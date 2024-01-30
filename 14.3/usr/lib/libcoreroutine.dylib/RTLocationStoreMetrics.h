@interface RTLocationStoreMetrics : NSObject

@property (nonatomic) unsigned long long count;
@property (nonatomic) double distanceTraveled;
@property (nonatomic) double maxIntervalBetweenLocations;
@property (nonatomic) double spread;

- (id)init;
- (id)description;
- (id)initWithCount:(unsigned long long)a0 maxIntervalBetweenLocations:(double)a1 spread:(double)a2 distanceTraveled:(double)a3;

@end
