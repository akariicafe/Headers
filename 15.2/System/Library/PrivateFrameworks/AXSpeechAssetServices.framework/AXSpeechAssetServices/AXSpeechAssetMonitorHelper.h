@interface AXSpeechAssetMonitorHelper : NSObject {
    double _lastVoiceAssetUpdateTime;
    struct __SCNetworkReachability { } *_reachability;
}

+ (id)sharedInstance;

- (void)updateAvailableSpeechAssets;
- (void)_checkClientForUpdates:(BOOL)a0;
- (void)_checkForAssetUpdatesNowAndNextWeek;
- (void)clearCurrentVoicesAndRefreshTTSVoiceListOnNextBoot;
- (void)_clientUpdateAvailableSpeechAssets;
- (void)_unregisterForReachabilityNotifications;
- (void)_registerForReachabilityNotifications;
- (id)init;
- (BOOL)_platformSupportsMobileAssetVoices;
- (BOOL)_areMobileAssetsPresent;
- (id)_assetUpdaterClient;
- (id)speechAssetUpdaterClient;
- (void)_monitorSpeechAssetChanges;
- (void)_monitorForNetworkChanges;

@end
