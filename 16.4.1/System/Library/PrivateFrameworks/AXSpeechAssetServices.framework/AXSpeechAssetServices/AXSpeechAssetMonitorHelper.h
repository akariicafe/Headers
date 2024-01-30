@class AXAssetsService, NSObject;
@protocol OS_dispatch_queue;

@interface AXSpeechAssetMonitorHelper : NSObject {
    double _lastVoiceAssetUpdateTime;
    struct __SCNetworkReachability { } *_reachability;
    AXAssetsService *_assetService;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *longOperationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue;

+ (id)sharedInstance;

- (void)_monitorSpeechAssetChanges;
- (id)_assetUpdaterClient;
- (void)_monitorForNetworkChanges;
- (void)clearCurrentVoicesAndRefreshTTSVoiceListOnNextBoot;
- (void)_updateSpeechSourceIdentifiersIfNeeded;
- (id)speechAssetUpdaterClient;
- (void)_unregisterForReachabilityNotifications;
- (id)init;
- (void)startMigrationOnDeviceUnlock;
- (BOOL)_platformSupportsMobileAssetVoices;
- (void)_registerForReachabilityNotifications;
- (void).cxx_destruct;

@end
