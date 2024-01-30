@class NSString;

@interface FlexMobileAssetV2SongAsset : FlexCloudSongAsset

@property (readonly) NSString *mobileAssetID;

- (id)mobileAsset;
- (void).cxx_destruct;
- (BOOL)contentUpdateAvaliable;
- (long long)contentVersionForAssetLocation:(unsigned long long)a0;
- (id)_metadataForAssetWithNewestContentVersion;
- (unsigned long long)assetStatus;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)a0;
- (id)initWithAssetID:(id)a0 asset:(id)a1 localURL:(id)a2 cloudManager:(id)a3 contentVersion:(long long)a4 compatibilityVersion:(long long)a5;

@end
