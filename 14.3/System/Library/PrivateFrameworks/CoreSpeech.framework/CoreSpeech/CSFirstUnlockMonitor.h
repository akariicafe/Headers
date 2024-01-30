@interface CSFirstUnlockMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _firstUnlocked;
}

+ (id)sharedInstance;

- (id)init;
- (void)_firstUnlockNotified;
- (void)_stopMonitoring;
- (void)_didReceiveFirstUnlockInQueue:(BOOL)a0;
- (void)_didReceiveFirstUnlock:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withUnlocked:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)_checkFirstUnlocked;
- (BOOL)isFirstUnlocked;

@end
