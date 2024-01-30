@interface CSLanguageCodeUpdateMonitorImpl : CSLanguageCodeUpdateMonitor {
    int _notifyToken;
}

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)notifySiriLanguageCodeChanged:(id)a0;
- (void)_notifyObserver:(id)a0 withLanguageCode:(id)a1;
- (id)init;
- (void)_didReceiveLanguageCodeUpdate;

@end
