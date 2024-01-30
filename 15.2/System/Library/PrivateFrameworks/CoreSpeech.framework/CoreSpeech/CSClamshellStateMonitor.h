@interface CSClamshellStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (id)init;
- (void)_notifyObserver:(id)a0 withClamshellState:(BOOL)a1;
- (BOOL)isClamshellClosed;
- (void)_didReceiveClamshellStateChangeNotification:(BOOL)a0;

@end
