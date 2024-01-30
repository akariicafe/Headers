@interface CSSpeechEndpointAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_didReceiveNewSpeechEndpointAssetMetaData;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0;

@end
