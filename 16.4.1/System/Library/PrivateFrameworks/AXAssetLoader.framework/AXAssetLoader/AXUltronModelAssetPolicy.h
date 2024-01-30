@interface AXUltronModelAssetPolicy : AXAssetPolicy

+ (long long)minimumCompatibilityVersion;
+ (id)ultronAssetType;
+ (id)assetsToDownloadFromAssets:(id)a0;
+ (BOOL)_isUltronAssetCompatible:(id)a0;
+ (long long)maximumCompatibilityVersion;
+ (id)compatibleAssetsFromRefreshedAssets:(id)a0;
+ (id)newestCompatiableAssetsFromAssets:(id)a0;

- (id)assetType;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (id)launchActivityIdentifier;
- (BOOL)shouldCopyLocally;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)assetsToDownloadFromRefreshedAssets:(id)a0;
- (BOOL)_assetUsedRecently;

@end
