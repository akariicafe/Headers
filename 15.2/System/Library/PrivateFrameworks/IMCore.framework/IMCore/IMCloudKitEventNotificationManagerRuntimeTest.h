@class NSString, IMCloudKitHookTestSingleton;

@interface IMCloudKitEventNotificationManagerRuntimeTest : IMRuntimeTestCase <IMCloudKitEventHandler> {
    double _previousInterval;
}

@property double defaultTestDuration;
@property (retain, nonatomic) IMCloudKitHookTestSingleton *cloudKitHooks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (void)setUp;
- (void).cxx_destruct;
- (void)startTest;
- (void)cloudKitEventNotificationManager:(id)a0 syncStateDidChange:(id)a1;
- (void)cloudKitEventNotificationManager:(id)a0 syncProgressDidUpdate:(id)a1;
- (void)sendSyncStateChangedEvent;
- (id)createSyncStatisticsForMockSyncState:(id)a0;
- (void)willUpdateSyncState:(id)a0;
- (void)willSendSyncState:(id)a0 withSyncStatistics:(id)a1;
- (void)updateMockSyncState;

@end
