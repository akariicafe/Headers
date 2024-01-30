@interface CSLanguageCodeUpdateMonitorImpl : CSLanguageCodeUpdateMonitor {
    int _notifyToken;
}

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withLanguageCode:(id)a1;
- (void)notifySiriLanguageCodeChanged:(id)a0;
- (void)_didReceiveLanguageCodeUpdate;
- (id)init;

@end
