@interface AXSpeechAssetMonitorHelper : NSObject {
    double _lastVoiceAssetUpdateTime;
    struct __SCNetworkReachability { } *_reachability;
}

+ (id)sharedInstance;

- (void)_unregisterForReachabilityNotifications;
- (id)init;
- (void)_clientUpdateAvailableSpeechAssets;
- (void)_monitorSpeechAssetChanges;
- (void)_checkClientForUpdates:(BOOL)a0;
- (void)clearCurrentVoicesAndRefreshTTSVoiceListOnNextBoot;
- (void)_registerForReachabilityNotifications;
- (void)updateAvailableSpeechAssets;
- (void)_checkForAssetUpdatesNowAndNextWeek;
- (void)_monitorForNetworkChanges;
- (BOOL)_areMobileAssetsPresent;
- (id)speechAssetUpdaterClient;
- (BOOL)_platformSupportsMobileAssetVoices;
- (id)_assetUpdaterClient;

@end
