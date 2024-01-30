@interface AXImageCaptionModelAssetPolicy : AXAssetPolicy

@property (class, readonly, nonatomic) long long minimumCompatibilityVersion;
@property (class, readonly, nonatomic) long long maximumCompatibilityVersion;

+ (id)assertionForNewsestCompatibleImageCaptionModelAssetWithStage:(id)a0 language:(id)a1 clientIdentifier:(id)a2;

- (id)assetType;
- (void)_partitionAssets:(id)a0 intoValidAssets:(id)a1 invalidAssets:(id)a2;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (id)launchActivityIdentifier;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)assetsToDownloadFromRefreshedAssets:(id)a0;

@end
