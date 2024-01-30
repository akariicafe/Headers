@class HKWorkoutRoute;

@interface HDWorkoutRouteQueryServer : HDQueryServer {
    unsigned long long _batchThreshold;
    HKWorkoutRoute *_locationSeries;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (void).cxx_destruct;
- (void)unitTest_setBatchThreshold:(unsigned long long)a0;

@end
