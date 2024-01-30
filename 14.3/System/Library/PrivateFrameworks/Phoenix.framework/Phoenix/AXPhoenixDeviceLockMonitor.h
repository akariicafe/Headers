@interface AXPhoenixDeviceLockMonitor : AXPhoenixEventMonitor

@property (nonatomic, getter=isDeviceLocked) BOOL deviceLocked;

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)deviceLockStateChanged:(double)a0;
- (BOOL)_queryIsDeviceLocked;
- (void)_notifyObserver:(id)a0 isDeviceLocked:(BOOL)a1 timestamp:(double)a2;

@end
