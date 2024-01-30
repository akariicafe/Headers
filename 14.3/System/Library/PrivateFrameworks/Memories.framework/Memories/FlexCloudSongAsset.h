@class FlexCloudManager;

@interface FlexCloudSongAsset : FMSongAsset

@property (readonly, weak) FlexCloudManager *cloudManager;

- (void).cxx_destruct;
- (void)cancelDownload;
- (unsigned long long)assetStatus;
- (void)requestDownload;
- (long long)contentVersionForAssetLocation:(unsigned long long)a0;
- (BOOL)contentUpdateAvaliable;
- (void)purgeLocalCache;
- (id)initWithAssetID:(id)a0 assetStatus:(unsigned long long)a1 localURL:(id)a2 cloudManager:(id)a3 contentVersion:(long long)a4 compatibilityVersion:(long long)a5;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)a0;
- (BOOL)isCloudBacked;
- (void)requestDownloadWithOptions:(id)a0;

@end
