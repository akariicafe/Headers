@class NSURL, NTKArgonCloudKitClient;
@protocol NTKArgonLocalKeyDatabaseProviding;

@interface NTKArgonAssetDownloader : NSObject {
    BOOL _downloadingAssets;
}

@property (retain, nonatomic) NTKArgonCloudKitClient *cloudKitClient;
@property (readonly, nonatomic) id<NTKArgonLocalKeyDatabaseProviding> keyDatabase;
@property (readonly, copy, nonatomic) NSURL *assetDestinationURL;

- (void).cxx_destruct;
- (id)initWithKeyDatabase:(id)a0 assetDestinationURL:(id)a1;
- (void)downloadAssets;

@end
