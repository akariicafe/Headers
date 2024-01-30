@interface ICTelemetryManager : NSObject

+ (id)sharedManager;
+ (void)postBasicEvent:(unsigned long long)a0;
+ (void)postFetchDatabaseChangesTelemetryWithReason:(id)a0;
+ (void)postFetchZoneChangesTelemetryWithReason:(id)a0;
+ (void)postFullSyncTelemetryWithReason:(id)a0;
+ (id)telemetryTuples;
+ (id)telemetryQueue;
+ (void)waitUntilAllPendingTelemetryHasBeenSent;

- (void)postTelemetryEvent:(unsigned long long)a0 serviceName:(id)a1 payload:(id)a2;

@end
