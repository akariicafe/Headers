@class RTDarwinNotificationHelper;

@interface RTBatteryManager : RTService

@property (nonatomic) BOOL monitorBatteryStatusChanges;
@property (nonatomic) long long externalConnectionState;
@property (readonly, nonatomic) RTDarwinNotificationHelper *notificationHelper;

+ (BOOL)_ioDrawingUnlimitedPower;
+ (long long)currentExternalConnectionState;
+ (id)externalConnectionStateToString:(long long)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)fetchCurrentChargerConnectionState:(id /* block */)a0;
- (id)initWithQueue:(id)a0;
- (void)_unregisterForNotifications;
- (void)updateBatteryStatus:(long long)a0;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)stopMonitoringBatteryStatusChanges;
- (void).cxx_destruct;
- (id)init;
- (void)startMonitoringBatteryStatusChanges;
- (id)initWithQueue:(id)a0 notificationHelper:(id)a1;
- (void)dealloc;

@end
