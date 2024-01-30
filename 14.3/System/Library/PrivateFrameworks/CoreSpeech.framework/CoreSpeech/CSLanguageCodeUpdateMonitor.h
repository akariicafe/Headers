@interface CSLanguageCodeUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0 withLanguageCode:(id)a1;
- (void)_didReceiveLanguageCodeUpdate;
- (void)_startMonitoringWithQueue:(id)a0;

@end
