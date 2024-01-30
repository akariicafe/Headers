@class CSAssetDownloadingOption, NSString, NSMutableDictionary, NSObject, CSPolicy;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSAssetManager : NSObject <CSVoiceTriggerAssetMetaUpdateMonitorDelegate, CSSpeechEndpointAssetMetaUpdateMonitorDelegate, CSAdBlockerMetaUpdateMonitorDelegate, CSAssetControllerDelegate, CSSpeakerRecognitionAssetMetaUpdateMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate> {
    CSPolicy *_enablePolicy;
    NSString *_currentLanguageCode;
    CSAssetDownloadingOption *_downloadingOption;
    NSMutableDictionary *_observers;
    NSObject<OS_dispatch_source> *_downloadTimer;
    long long _downloadTimerCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *currentLanguageCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)CSAssetController:(id)a0 didDownloadNewAssetForType:(unsigned long long)a1;
- (void)installedAssetOfType:(unsigned long long)a0 language:(id)a1 completion:(id /* block */)a2;
- (id)assetOfType:(unsigned long long)a0 language:(id)a1;
- (void)CSVoiceTriggerAssetMetaUpdateMonitor:(id)a0 didReceiveNewVoiceTriggerAssetMetaData:(BOOL)a1;
- (void)CSAdBlockerMetaUpdateMonitor:(id)a0 didReceiveNewAdBlockerAssetMetaData:(BOOL)a1;
- (void)assetForCurrentLanguageOfType:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)allInstalledAssetsOfType:(unsigned long long)a0 language:(id)a1;
- (void)setAssetDownloadingOption:(id)a0;
- (void)_createPeriodicalDownloadTimer;
- (void)assetOfType:(unsigned long long)a0 providerType:(unsigned long long)a1 language:(id)a2 completion:(id /* block */)a3;
- (void)assetOfType:(unsigned long long)a0 language:(id)a1 compatibilityVersion:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_fetchRemoteMetaData;
- (void)addObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (void)_startPeriodicalDownload;
- (id)installedAssetForCurrentLanguageOfType:(unsigned long long)a0;
- (void)assetOfType:(unsigned long long)a0 language:(id)a1 completion:(id /* block */)a2;
- (void)_stopPeriodicalDownload;
- (void)CSSpeakerRecognitionAssetMetaUpdateMonitor:(id)a0 didReceiveNewSpeakerRecognitionAssetMetaData:(BOOL)a1;
- (BOOL)_canFetchRemoteAsset:(unsigned long long)a0;
- (void)CSSpeechEndpointAssetMetaUpdateMonitor:(id)a0 didReceiveNewSpeechEndpointAssetMetaData:(BOOL)a1;
- (id)assetForCurrentLanguageOfType:(unsigned long long)a0;
- (void)removeObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (id)installedAssetOfType:(unsigned long long)a0 language:(id)a1;
- (void)installedAssetForCurrentLanguageOfType:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithDownloadOption:(id)a0;
- (void).cxx_destruct;

@end
