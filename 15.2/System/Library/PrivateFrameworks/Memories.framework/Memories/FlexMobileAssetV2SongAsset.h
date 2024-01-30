@class MAAsset;

@interface FlexMobileAssetV2SongAsset : FlexCloudSongAsset

@property (readonly) MAAsset *mobileAsset;

- (void).cxx_destruct;
- (BOOL)contentUpdateAvaliable;
- (unsigned long long)assetStatus;
- (long long)contentVersionForAssetLocation:(unsigned long long)a0;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)a0;
- (id)_metadataForAssetWithNewestContentVersion;
- (id)initWithAssetID:(id)a0 asset:(id)a1 localURL:(id)a2 cloudManager:(id)a3 contentVersion:(long long)a4 compatibilityVersion:(long long)a5;

@end
