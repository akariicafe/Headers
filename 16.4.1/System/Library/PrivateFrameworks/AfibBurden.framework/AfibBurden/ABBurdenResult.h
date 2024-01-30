@class NSNumber, NSDictionary;

@interface ABBurdenResult : NSObject

@property (retain, nonatomic) NSNumber *burdenPercentage;
@property (nonatomic) unsigned long long unavailabilityReason;
@property (retain, nonatomic) NSDictionary *metricsForCoreAnalytics;

- (id)init;
- (void).cxx_destruct;

@end
