@class NSDateInterval;

@interface RTLocationStoreMetricOptions : NSObject

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) double uncertaintyThreshold;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDateInterval:(id)a0 uncertaintyThreshold:(double)a1;

@end
