@interface RTLocationStoreMetrics : NSObject

@property (nonatomic) unsigned long long count;
@property (nonatomic) double distanceTraveled;
@property (nonatomic) double maxIntervalBetweenLocations;
@property (nonatomic) double spread;
@property (nonatomic) unsigned long long firstFixType;
@property (nonatomic) double firstFixHorizontalUncertainty;
@property (nonatomic) unsigned long long signalEnvironment;

- (id)init;
- (id)description;
- (id)initWithCount:(unsigned long long)a0 maxIntervalBetweenLocations:(double)a1 spread:(double)a2 distanceTraveled:(double)a3;

@end
