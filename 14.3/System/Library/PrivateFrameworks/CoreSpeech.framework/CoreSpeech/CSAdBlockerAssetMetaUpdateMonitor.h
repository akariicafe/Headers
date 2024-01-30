@interface CSAdBlockerAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (const char *)_asssetMetaUpdatedKey;
- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveNewAdBlockerAssetMetaData;
- (void)_notifyObserver:(id)a0;

@end
