@class VTPolicy, NSObject;
@protocol OS_dispatch_queue;

@interface VTAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    VTPolicy *_enablePolicy;
}

+ (id)sharedInstance;

- (void)_downloadAsset:(id)a0 withComplete:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_findLatestInstalledAsset:(id)a0;
- (void)_fetchRemoteMetaData;
- (void)_runAssetQuery:(id)a0 completion:(id /* block */)a1;
- (id)_defaultDownloadOptions;
- (BOOL)_isReadyToUse;
- (id)installedAssetForLanguage:(id)a0;
- (void)_fetchRemoteAssetForLanguage:(id)a0 supportPremium:(BOOL)a1;
- (id)_installedAssetForLanguage:(id)a0 supportPremium:(BOOL)a1;
- (id)_assetQueryForLanguage:(id)a0 supportPremium:(BOOL)a1;
- (id)_filteredAssetsForAssets:(id)a0 language:(id)a1 supportPremium:(BOOL)a2;
- (id)_installedAssetWithoutMetaDataForLanguage:(id)a0 supportPremium:(BOOL)a1;
- (void)_updateFromRemoteToLocalAssets:(id)a0;
- (void)_addKeyValuePairForQuery:(id *)a0;
- (void)_startDownloadingVoiceTriggerAsset:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (id)assetForLanguage:(id)a0;

@end
