@interface CSClamshellStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withClamshellState:(BOOL)a1;
- (BOOL)isClamshellClosed;
- (void)_didReceiveClamshellStateChangeNotification:(BOOL)a0;

@end
