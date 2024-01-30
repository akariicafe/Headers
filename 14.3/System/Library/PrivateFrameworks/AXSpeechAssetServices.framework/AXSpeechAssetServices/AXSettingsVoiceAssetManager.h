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

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)updateAvailableSpeechAssetsSynchronously;
- (id)selectedIdsForTesting;
- (void)cleanUpExtraInstalledAssetsIfNecessary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)mobileAssetWorkQueue;
- (BOOL)inUnitTestMode;
- (void)dealloc;
- (id)_currentDelegates;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (long long)diskSizeForAsset:(id)a0;
- (id)mobileAssetDownloadQueue;
- (void)setSelectedIdsForTesting:(id)a0;
- (id)assetForVoiceId:(id)a0;
- (id)assetsForTesting;
- (id)_cachedAssetForVoiceId:(id)a0;
- (void)stopDownloadingAlternateVoice:(id)a0;
- (id)_allInstalledAssetsForVoiceId:(id)a0;
- (id)allInstalledAssetsForVoiceId:(id)a0;
- (void)requestVoiceAlternateVoiceDownloadProgress:(id)a0;
- (void)_handleAssetProgress:(id)a0 voiceId:(id)a1 diskSize:(long long)a2 asset:(id)a3;
- (void)_requestVoiceAlternateVoiceDownloadProgress:(id)a0;
- (void)removeSiriVoiceUsage:(id)a0;
- (void)playSample:(id)a0 completion:(id /* block */)a1;
- (void)startDownloadingAlternateVoice:(id)a0;
- (BOOL)_voiceIdIsVocalizerVoice:(id)a0;
- (void)setAssetsForTesting:(id)a0;
- (id)_allAssetsForVoiceId:(id)a0 forDeletion:(BOOL)a1;
- (id)_mobileAssetDownloadOptions;
- (void)replaceTestAsset:(id)a0 withAsset:(id)a1;
- (id)_assetTypeForVoiceId:(id)a0;
- (void)deleteDownloadAlternateVoice:(id)a0;
- (void)_startDownloadingAlternateVoice:(id)a0;
- (void)_updateAllowedToDownload;
- (id)_assetUpdaterClient;
- (void)clientUpdateAvailableSpeechAssets;
- (id)_assetForVoiceId:(id)a0 forDeletion:(BOOL)a1;
- (BOOL)allowedToDownloadVoiceAssets;

@end
