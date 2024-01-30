@interface CSScreenLockMonitor : CSEventMonitor {
    BOOL _isScreenLocked;
}

+ (id)sharedInstance;

- (BOOL)isScreenLocked;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (BOOL)_queryIsScreenLocked;
- (void)_notifyObserver:(id)a0 isScreenLocked:(BOOL)a1;
- (id)init;
- (void)screenLockStateChanged;
- (void)dealloc;

@end
