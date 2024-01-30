@interface CSScreenLockMonitor : CSEventMonitor {
    BOOL _isScreenLocked;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)isScreenLocked;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)dealloc;
- (void)screenLockStateChanged;
- (void)_notifyObserver:(id)a0 isScreenLocked:(BOOL)a1;
- (BOOL)_queryIsScreenLocked;
- (id)init;

@end
