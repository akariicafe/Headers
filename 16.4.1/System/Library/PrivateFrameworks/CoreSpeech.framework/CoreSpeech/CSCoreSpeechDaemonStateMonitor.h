@interface CSCoreSpeechDaemonStateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveDaemonStateChanged:(unsigned long long)a0;
- (void)_notifyObserver:(id)a0 withDaemonState:(unsigned long long)a1;
- (id)init;
- (void)notifyDaemonStateChanged:(unsigned long long)a0;

@end
