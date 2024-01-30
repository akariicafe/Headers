@class NSString, NSPointerArray, AVSpeechSynthesizer;

@interface AXSettingsVoiceAssetManager : NSObject <AVSpeechSynthesizerDelegate> {
    struct __SCNetworkReachability { } *_reachability;
    NSPointerArray *_delegates;
    AVSpeechSynthesizer *_samplePlayer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (id)allInstalledAssetsForVoiceId:(id)a0;
- (void)_requestSiriVoiceDownloadProgress:(id)a0;
- (void)playSample:(id)a0 completion:(id /* block */)a1;
- (void)startDownloadingVoice:(id)a0;
- (void)requestVoiceDownloadProgress:(id)a0;
- (void)_deleteMobileAssetVoice:(id)a0;
- (id)mobileAssetWorkQueue;
- (void)deleteDownloadVoice:(id)a0;
- (long long)diskSizeForAsset:(id)a0;
- (id)mobileAssetDownloadQueue;
- (void)cleanUpExtraInstalledAssetsIfNecessary:(id)a0;
- (void)_handleAssetProgress:(id)a0 voiceId:(id)a1 diskSize:(long long)a2 asset:(id)a3;
- (void)_notifySiriVoiceAssetUsageChanged:(id)a0 forLanguage:(id)a1;
- (id)_mobileAssetDownloadOptions;
- (void)_startDownloadingVoice:(id)a0;
- (id)_assetForVoiceId:(id)a0 forDeletion:(BOOL)a1;
- (void)stopDownloadingVoice:(id)a0;
- (BOOL)inUnitTestMode;
- (void)setSelectedIdsForTesting:(id)a0;
- (id)_allAssetsForVoiceId:(id)a0 forDeletion:(BOOL)a1;
- (void)_updateAllowedToDownload;
- (void)clientUpdateAvailableSpeechAssets;
- (void)_stopDownloadingSiriAssetVoice:(id)a0;
- (void)_deleteSiriAssetVoice:(id)a0;
- (id)_allInstalledAssetsForVoiceId:(id)a0;
- (void)removeSiriVoiceUsage:(id)a0 forLanguage:(id)a1;
- (void).cxx_destruct;
- (id)_assetTypeForVoiceId:(id)a0;
- (id)selectedIdsForTesting;
- (id)_cachedAssetForVoiceId:(id)a0;
- (id)init;
- (BOOL)isAssetManagedBySiriForVoiceId:(id)a0;
- (void)updateAvailableSpeechAssetsSynchronously;
- (id)_assetUpdaterClient;
- (void)_requestMobileAssetVoiceDownloadProgress:(id)a0;
- (id)mobileAssetForVoiceId:(id)a0;
- (BOOL)allowedToDownloadVoiceAssets;
- (void)setAssetsForTesting:(id)a0;
- (void)_startDownloadingSiriVoice:(id)a0;
- (void)dealloc;
- (id)assetsForTesting;
- (void)_startDownloadingMobileAssetVoice:(id)a0;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (id)voiceAssetForVoiceId:(id)a0;
- (void)replaceTestAsset:(id)a0 withAsset:(id)a1;
- (void)_requestVoiceDownloadProgress:(id)a0;
- (id)_currentDelegates;
- (void)_stopDownloadingMobileAssetVoice:(id)a0;

@end
