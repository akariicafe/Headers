@interface CSCoreSpeechDaemonStateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveDaemonStateChanged:(unsigned long long)a0;
- (void)_stopMonitoring;
- (void)notifyDaemonStateChanged:(unsigned long long)a0;
- (id)init;
- (void)_notifyObserver:(id)a0 withDaemonState:(unsigned long long)a1;

@end
