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
+ (BOOL)_shouldDeliverQuantityWithStartTime:(double)a0 UUID:(id)a1 maximumDeliveredStartDate:(id)a2 latestDeliveredUUID:(id)a3 orderBySamples:(BOOL)a4;
+ (Class)queryClass;
+ (BOOL)_enumerateQuantityValuesForPredicate:(id)a0 orderBySamples:(BOOL)a1 profile:(id)a2 error:(id *)a3 handler:(id /* block */)a4;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)_clientProxy;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)unitTest_setBatchThreshold:(long long)a0;
- (void)_deliverError:(id)a0;
- (void)_deliverEmptyResults;
- (void)_queue_startSingleSeriesMode;
- (void)_queue_startEnumerationMode;
- (void)_deliverQuantitySeries:(id)a0 seriesAnchor:(long long)a1 isFinal:(BOOL)a2;
- (void)_deliverEnumerationResults:(id)a0 isFinal:(BOOL)a1;
- (id)_predicateForEnumerationWithError:(id *)a0;
- (BOOL)_deliverEnumerationResults:(id)a0 latestUUID:(id)a1 latestSampleStartTime:(double)a2 sampleIDsToLookup:(id)a3 isFinal:(BOOL)a4 error:(id *)a5;

@end
