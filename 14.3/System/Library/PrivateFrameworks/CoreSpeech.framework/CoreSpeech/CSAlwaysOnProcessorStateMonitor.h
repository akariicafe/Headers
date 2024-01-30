@interface CSAlwaysOnProcessorStateMonitor : CSEventMonitor {
    BOOL _isListeningEnabled;
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveAOPListeningStateChange:(BOOL)a0;
- (BOOL)isEnabled;

@end
