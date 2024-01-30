@interface CSScreenLockMonitor : CSEventMonitor {
    BOOL _isScreenLocked;
}

+ (id)sharedInstance;

- (BOOL)isScreenLocked;
- (id)init;
- (void)_stopMonitoring;
- (void)dealloc;
- (void)screenLockStateChanged;
- (void)_notifyObserver:(id)a0 isScreenLocked:(BOOL)a1;
- (BOOL)_queryIsScreenLocked;
- (void)_startMonitoringWithQueue:(id)a0;

@end
