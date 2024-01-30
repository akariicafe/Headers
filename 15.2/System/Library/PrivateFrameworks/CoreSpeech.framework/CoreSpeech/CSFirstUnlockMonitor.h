@interface CSFirstUnlockMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _firstUnlocked;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_didReceiveFirstUnlock:(BOOL)a0;
- (BOOL)isFirstUnlocked;
- (void)_didReceiveFirstUnlockInQueue:(BOOL)a0;
- (id)init;
- (void)_firstUnlockNotified;
- (BOOL)_checkFirstUnlocked;
- (void)_notifyObserver:(id)a0 withUnlocked:(BOOL)a1;

@end
