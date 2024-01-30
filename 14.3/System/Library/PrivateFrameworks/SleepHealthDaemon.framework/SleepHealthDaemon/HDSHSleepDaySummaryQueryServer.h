@class HKSHSleepDaySummaryQueryConfiguration;

@interface HDSHSleepDaySummaryQueryServer : HDQueryServer {
    HKSHSleepDaySummaryQueryConfiguration *_configuration;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)objectTypes;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (BOOL)_queue_surfaceDaySummariesWithError:(id *)a0;

@end
