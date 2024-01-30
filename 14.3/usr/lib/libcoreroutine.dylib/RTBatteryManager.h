@class RTDarwinNotificationHelper;

@interface RTBatteryManager : RTService

@property (nonatomic) BOOL monitorBatteryStatusChanges;
@property (nonatomic) long long externalConnectionState;
@property (readonly, nonatomic) RTDarwinNotificationHelper *notificationHelper;

+ (long long)currentExternalConnectionState;
+ (BOOL)_ioDrawingUnlimitedPower;
+ (id)externalConnectionStateToString:(long long)a0;

- (void)_shutdown;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_unregisterForNotifications;
- (id)initWithQueue:(id)a0 notificationHelper:(id)a1;
- (void)startMonitoringBatteryStatusChanges;
- (void)stopMonitoringBatteryStatusChanges;
- (void)updateBatteryStatus:(long long)a0;
- (void)fetchCurrentChargerConnectionState:(id /* block */)a0;

@end
