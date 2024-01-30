@interface CSAlwaysOnProcessorStateMonitor : CSEventMonitor {
    BOOL _isListeningEnabled;
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (BOOL)isEnabled;
- (id)init;
- (void)_didReceiveAOPListeningStateChange:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;

@end
