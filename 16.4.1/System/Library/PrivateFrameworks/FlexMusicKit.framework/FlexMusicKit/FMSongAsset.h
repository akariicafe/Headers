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

- (void)cancelDownload;
- (double)downloadProgress;
- (void).cxx_destruct;
- (void)requestDownload;
- (BOOL)contentUpdateAvaliable;
- (BOOL)localURLExists;
- (long long)contentVersionForAssetLocation:(unsigned long long)a0;
- (void)purgeLocalCache;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)a0;
- (id)initWithAssetID:(id)a0 assetStatus:(unsigned long long)a1 localURL:(id)a2 contentVersion:(long long)a3 compatibilityVersion:(long long)a4;
- (BOOL)isCloudBacked;
- (void)requestDownloadWithOptions:(id)a0;
- (BOOL)updateDownloadProgress:(double)a0;

@end
