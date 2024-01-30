@interface IMCloudKitSyncProgressRuntimeTest : IMCloudKitEventNotificationManagerRuntimeTest

@property unsigned long long progressCount;
@property unsigned long long maxProgressCount;
@property double progressRescheduleDelay;

- (void)setUp;
- (void)startTest;
- (void)cloudKitEventNotificationManager:(id)a0 syncProgressDidUpdate:(id)a1;
- (id)createSyncStatisticsForMockSyncState:(id)a0;

@end
