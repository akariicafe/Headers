@class FlexCloudManager;

@interface FlexCloudSongAsset : FMSongAsset

@property (readonly, weak) FlexCloudManager *cloudManager;

- (void)cancelDownload;
- (void).cxx_destruct;
- (void)requestDownload;
- (BOOL)contentUpdateAvaliable;
- (unsigned long long)assetStatus;
- (BOOL)isCloudBacked;
- (void)requestDownloadWithOptions:(id)a0;
- (void)purgeLocalCache;
- (long long)contentVersionForAssetLocation:(unsigned long long)a0;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)a0;
- (id)initWithAssetID:(id)a0 assetStatus:(unsigned long long)a1 localURL:(id)a2 cloudManager:(id)a3 contentVersion:(long long)a4 compatibilityVersion:(long long)a5;

@end
