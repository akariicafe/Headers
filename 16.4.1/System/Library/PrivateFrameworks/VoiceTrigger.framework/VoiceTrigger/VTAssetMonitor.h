@interface VTAssetMonitor : VTEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveNewAssetAvailable;
- (void)_notifyObserver:(id)a0;
- (id)init;
- (void)notifyNewAssetDownloaded;

@end
