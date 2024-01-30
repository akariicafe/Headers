@class NSDate, NSUUID, HKQuantitySample;

@interface HDQuantitySeriesSampleQueryServer : HDQueryServer {
    HKQuantitySample *_sample;
    long long _batchThreshold;
    long long _lastDatumIndex;
    long long _mode;
    unsigned long long _options;
    NSDate *_maximumDeliveredStartDate;
    NSUUID *_latestDeliveredUUID;
    NSDate *_latestDeliveredSampleStartDate;
}

@property (copy, nonatomic) id /* block */ unitTest_batchWillDeliver;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)unitTest_setBatchThreshold:(long long)a0;

@end
