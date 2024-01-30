@class NSString, NSDictionary, MAAsset, NSDate, NSURL;

@interface ASAsset : NSObject {
    NSDictionary *_attributes;
    NSString *_clientName;
    NSString *_identifier;
    MAAsset *_maAsset;
}

@property (retain, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSDictionary *fullAttributes;
@property (retain, nonatomic) MAAsset *maAsset;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSDate *installDate;
@property (readonly, nonatomic) NSURL *localURL;
@property (nonatomic) long long garbageCollectionBehavior;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly, nonatomic) NSDictionary *downloadOptions;
@property (nonatomic) BOOL userInitiatedDownload;

+ (BOOL)nonUserInitiatedDownloadsAllowed;

- (void)purge:(id /* block */)a0;
- (id)identifier;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)cancelDownload:(id /* block */)a0;
- (id)_getLocalAttribute:(id)a0;
- (void)beginDownloadWithOptions:(id)a0;
- (BOOL)isPresentOnDisk;
- (void)resumeDownload:(id /* block */)a0;
- (void)_downloadWithOptions:(id)a0 shouldFireCallback:(BOOL)a1;
- (void)adjustDownloadOptions:(id)a0 completion:(id /* block */)a1;
- (id)assetServerUrl;
- (long long)assetStateForStateString:(id)a0;
- (BOOL)cancelDownloadAndReturnError:(id *)a0;
- (id)initWithAssetType:(id)a0 attributes:(id)a1;
- (id)initWithMAAsset:(id)a0;
- (void)pauseDownload:(id /* block */)a0;
- (BOOL)pauseDownloadAndReturnError:(id *)a0;
- (BOOL)purgeAndReturnError:(id *)a0;
- (BOOL)requiredDiskSpaceIsAvailable:(long long *)a0 error:(id *)a1;
- (BOOL)requiredDiskSpaceIsAvailableForDownloadOptions:(id)a0 requiredBytes:(long long *)a1 error:(id *)a2;
- (BOOL)resumeDownloadAndReturnError:(id *)a0;
- (id)systemAppServerUrl;

@end
