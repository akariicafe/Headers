@interface VTSpringboardStartMonitor : VTEventMonitor {
    int _notifyToken;
    BOOL _isSpringBoardStarted;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0 withStarted:(BOOL)a1;
- (BOOL)_checkSpringBoardStarted;
- (void)_didReceiveSpringboardStarted:(BOOL)a0;
- (void)_didReceiveSpringboardStartedInQueue:(BOOL)a0;
- (id)init;
- (BOOL)isSpringboardStarted;

@end
