@class HKQuantityType, NSDateInterval;

@interface HDStatisticsQueryServer : HDQueryServer {
    NSDateInterval *_dateInterval;
    HKQuantityType *_quantityType;
}

@property (readonly, nonatomic) unsigned long long statisticsOptions;
@property (readonly, nonatomic) unsigned long long mergeStrategy;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (id)quantityType;
- (void)_queue_start;
- (id)_queue_fetchStatisticsWithError:(id *)a0;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;

@end
