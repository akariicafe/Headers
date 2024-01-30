@class NSString, NSURL;

@interface FMSongAsset : NSObject {
    double _downloadProgress;
}

@property (readonly, nonatomic) long long contentVersion;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (readonly) NSString *assetID;
@property (retain) NSString *songUID;
@property (readonly) unsigned long long assetStatus;
@property (readonly) NSURL *localURL;

- (void).cxx_destruct;
- (void)cancelDownload;
- (double)downloadProgress;
- (BOOL)updateDownloadProgress:(double)a0;
- (void)requestDownload;
- (long long)contentVersionForAssetLocation:(unsigned long long)a0;
- (BOOL)contentUpdateAvaliable;
- (void)purgeLocalCache;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)a0;
- (BOOL)isCloudBacked;
- (BOOL)localURLExists;
- (id)initWithAssetID:(id)a0 assetStatus:(unsigned long long)a1 localURL:(id)a2 contentVersion:(long long)a3 compatibilityVersion:(long long)a4;
- (void)requestDownloadWithOptions:(id)a0;

@end
