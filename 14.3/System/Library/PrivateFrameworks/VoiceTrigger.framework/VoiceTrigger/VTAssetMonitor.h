@interface VTAssetMonitor : VTEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)notifyNewAssetDownloaded;
- (void)_didReceiveNewAssetAvailable;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0;

@end
