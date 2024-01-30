@class NSMutableDictionary, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSAssetController : NSObject <CSEventMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetsMigrationQueue;
@property (retain, nonatomic) NSDictionary *csAssetsDictionary;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getLanguageDetectorAssetTypeString;
+ (id)getEndpointAssetTypeString;
+ (unsigned long long)getLanguageDetectorCurrentCompatibilityVersion;
+ (void)addKeyValuePairForQuery:(id *)a0 assetType:(unsigned long long)a1;
+ (id)getAdBlockerAssetTypeString;
+ (id)filteredAssetsForAssets:(id)a0 assetType:(unsigned long long)a1 language:(id)a2;
+ (id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)a0 assetType:(unsigned long long)a1;
+ (id)getAssetTypeStringForType:(unsigned long long)a0;
+ (unsigned long long)getEndpointAssetCurrentCompatibilityVersion;
+ (id)getSpeakerRecognitionAssetTypeString;
+ (unsigned long long)getSpeakerRecognitionCurrentCompatibilityVersion;
+ (unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;
+ (unsigned long long)getAdBlockerCurrentCompatibilityVersion;
+ (id)getVoiceTriggerAssetTypeString;
+ (id)sharedController;

- (void)_downloadAsset:(id)a0 withComplete:(id /* block */)a1;
- (void)removeObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (id)init;
- (void)_fetchRemoteAssetOfType:(unsigned long long)a0 withLanguage:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_findLatestInstalledAsset:(id)a0;
- (id)allInstalledAssetsOfType:(unsigned long long)a0 language:(id)a1;
- (id)_installedAssetOfType:(unsigned long long)a0 withLanguage:(id)a1;
- (id)assetOfType:(unsigned long long)a0 language:(id)a1;
- (void)_cleanUpMobileAssetV1Directory;
- (void)_runAssetQuery:(id)a0 completion:(id /* block */)a1;
- (void)_downloadAssetCatalogForAssetType:(unsigned long long)a0 complete:(id /* block */)a1;
- (id)installedAssetOfType:(unsigned long long)a0 language:(id)a1;
- (void)installedAssetOfType:(unsigned long long)a0 withLanguage:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isRetryRecommendedWithResult:(long long)a0;
- (void)_updateFromRemoteToLocalAssets:(id)a0 forAssetType:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)_assetQueryForAssetType:(unsigned long long)a0;
- (void)_installedAssetOfType:(unsigned long long)a0 withLanguage:(id)a1 completion:(id /* block */)a2;
- (void)_startDownloadingAsset:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)installedAssetOfType:(unsigned long long)a0 language:(id)a1 completion:(id /* block */)a2;
- (void)CSEventMonitorDidReceiveEvent:(id)a0;
- (void)assetOfType:(unsigned long long)a0 language:(id)a1 completion:(id /* block */)a2;
- (id)_defaultDownloadOptions;
- (BOOL)_isReadyToUse;
- (id)installedAssetOfType:(unsigned long long)a0 withLanguage:(id)a1;
- (void)addObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (void)fetchRemoteMetaOfType:(unsigned long long)a0;
- (void)fetchRemoteMetaOfType:(unsigned long long)a0 allowRetry:(BOOL)a1;

@end
