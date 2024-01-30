@interface VTSpringboardStartMonitor : VTEventMonitor {
    int _notifyToken;
    BOOL _isSpringBoardStarted;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isSpringboardStarted;
- (void)_didReceiveSpringboardStarted:(BOOL)a0;
- (void)_didReceiveSpringboardStartedInQueue:(BOOL)a0;
- (BOOL)_checkSpringBoardStarted;
- (void)_notifyObserver:(id)a0 withStarted:(BOOL)a1;
- (id)init;

@end
