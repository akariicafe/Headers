@interface VTLanguageCodeUpdateMonitor : VTEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0 withLanguageCode:(id)a1;
- (id)init;
- (void)_didReceiveLanguageCodeUpdate;

@end
