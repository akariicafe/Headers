@class NSHashTable, NSString, NSSet, AXAssetController, NSMutableDictionary, AXAssetsService, AXAsset, NSObject;
@protocol OS_dispatch_queue;

@interface TTSAXResourceManager : NSObject <AXAssetControllerObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resourcesLock;
    NSMutableDictionary *_resourcesById;
    NSMutableDictionary *_resources;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSHashTable *_observers;
}

@property (retain, nonatomic) AXAssetController *assetController;
@property (retain, nonatomic) AXAssetController *legacyCombinedVocalizerAssetController;
@property (retain, nonatomic) AXAssetController *legacyMacinTalkAssetController;
@property (retain, nonatomic) AXAssetsService *assetsService;
@property (retain, nonatomic) NSSet *allAvailableLanguages;
@property (retain, nonatomic) AXAsset *samplesAsset;
@property (retain, nonatomic) NSString *catalogBuildVersion;
@property (nonatomic) BOOL downloadingSamples;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *preferenceWriteQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetLoadingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)resetResourcesCache;
- (id)resourceWithVoiceId:(id)a0;
- (BOOL)_isValidResourceTypeKey:(id)a0;
- (void)_deleteSiriVoiceAssetWithResource:(id)a0;
- (id)_resourceWithVoiceId:(id)a0 assetId:(id)a1;
- (void)deleteResourceWithAssetId:(id)a0;
- (void)stopDownloadResourceWithVoiceId:(id)a0;
- (void)assetController:(id)a0 asset:(id)a1 downloadProgressTotalWritten:(long long)a2 totalExpected:(long long)a3 isStalled:(BOOL)a4 expectedTimeRemaining:(double)a5;
- (id)resourcesWithLanguage:(id)a0 type:(unsigned long long)a1;
- (void)_writeResourcesToPreferences:(id)a0;
- (void)addObserver:(id)a0;
- (id)languageCodeForResourceName:(id)a0 withType:(unsigned long long)a1;
- (long long)readResourceCacheVersionFromPreferences;
- (id)_axAssetsForTTSAXResourceModel:(BOOL)a0;
- (BOOL)readDidMigrateUninformedSiriVoicesFromPreferences;
- (id)_findResourcesForLegacyAssets;
- (id)_readResourcesFromPreferences;
- (void)_writeResourceCacheVersionToPreferences;
- (id)superCompactVoiceIdForCompactVoiceId:(id)a0;
- (id)_refreshSamples:(BOOL)a0;
- (void)_downloadLegacyResourceForTesting:(id)a0;
- (id)sampleURLForVoiceId:(id)a0;
- (void)rebuildSystemCacheForActionType:(unsigned long long)a0;
- (void)downloadResourceWithVoiceId:(id)a0 userInitiated:(BOOL)a1;
- (id)_findLocalResourcesForPath:(id)a0;
- (id)refreshedResourcesForResources:(id)a0;
- (void)downloadSamplesIfNecessary;
- (void)purgeLegacyResourceCache;
- (id)resourcesWithType:(unsigned long long)a0 subType:(unsigned long long)a1;
- (id)_resourcesWithType:(unsigned long long)a0 subType:(unsigned long long)a1 languageCode:(id)a2;
- (unsigned long long)_managerTypeForResourceType:(unsigned long long)a0;
- (void)dealloc;
- (void)_updateCachedResources:(id)a0;
- (id)_debugCountSummaryForResources:(id)a0;
- (id)_findAndSwapLegacyMacinTalkAssetsForMacinTalkResources:(id)a0;
- (id)defaultVoiceForLanguage:(id)a0;
- (id)refreshAssetForResource:(id)a0 installedOnly:(BOOL)a1;
- (id)_refreshResourcesForManagerType:(unsigned long long)a0;
- (void)removeObserver:(id)a0;
- (void)updateCatalogBuildVersion:(id)a0;
- (id)_getSynthesisProviderResources;
- (id)refreshResourcesCacheForManagerType:(unsigned long long)a0;
- (id)_readCatalogBuildNumberFromPreferences;
- (void)_mergeInExpensiveInstalledAssets:(BOOL)a0 notifyObservers:(BOOL)a1;
- (id)resources;
- (void)_downloadResource:(id)a0 userInitiated:(BOOL)a1;
- (void)updateCatalogIfNeeded;
- (void)_deleteResource:(id)a0;
- (id)init;
- (id)allVoices:(BOOL)a0;
- (void)resetInMemoryAssetCatalogs;
- (void)_stopDownloadResource:(id)a0;
- (void)deleteResourceWithVoiceId:(id)a0;
- (void)updateDidMigrateUninformedSiriVoices:(BOOL)a0;
- (void)_downloadSiriVoiceAssetWithResource:(id)a0;
- (id)resourceWithAssetId:(id)a0;
- (void)downloadResourceWithVoiceId:(id)a0;
- (id)speechVoiceWithVoiceId:(id)a0;
- (id)_refreshAssetForResource:(id)a0 withAssetController:(id)a1 installedOnly:(BOOL)a2;
- (void)_performBlockOnObservers:(id /* block */)a0;
- (id)_refreshSiriResources:(BOOL)a0;
- (void).cxx_destruct;
- (void)_notifyObserversOfCacheUpdate;
- (void)downloadResourceWithAssetId:(id)a0;
- (void)assetController:(id)a0 didFinishDownloadingAsset:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3 hasRemainingDownloads:(BOOL)a4;
- (id)allLanguagesForVoices:(BOOL)a0;
- (id)_dictionaryForResources:(id)a0;
- (id)_resourcesForAssets:(id)a0;
- (void)_stopDownloadSiriVoiceAssetWithResource:(id)a0;

@end
