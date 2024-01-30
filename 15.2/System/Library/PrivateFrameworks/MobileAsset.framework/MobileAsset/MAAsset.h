@class NSDictionary, NSString;

@interface MAAsset : NSObject

@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *assetId;
@property (readonly) long long state;
@property (readonly, nonatomic) NSString *purpose;

+ (id)getLoadResultFromMessage:(id)a0;
+ (void)startCatalogDownload:(id)a0 options:(id)a1 then:(id /* block */)a2;
+ (id)loadSync:(id)a0 error:(id *)a1;
+ (void)startCatalogDownload:(id)a0 options:(id)a1 completionWithError:(id /* block */)a2;
+ (void)startCatalogDownload:(id)a0 then:(id /* block */)a1;
+ (void)cancelCatalogDownload:(id)a0 then:(id /* block */)a1;
+ (id)loadSync:(id)a0 allowingDifferences:(id)a1 withPurpose:(id)a2 error:(id *)a3;
+ (void)cancelCatalogDownload:(id)a0 withPurpose:(id)a1 then:(id /* block */)a2;
+ (id)loadSync:(id)a0 withPurpose:(id)a1 error:(id *)a2;
+ (id)loadSync:(id)a0 allowingDifferences:(id)a1 error:(id *)a2;

- (BOOL)refreshState;
- (BOOL)nonUserInitiatedDownloadsAllowed;
- (BOOL)wasLocal;
- (long long)purgeSync;
- (id)description;
- (void)startDownload:(id /* block */)a0;
- (id)absoluteAssetId;
- (void)logAsset;
- (id)getLocalFilePath;
- (void)startDownloadWithExtractor:(id /* block */)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)startDownloadWithExtractor:(id /* block */)a0 options:(id)a1 completionWithError:(id /* block */)a2;
- (id)hashToString:(id)a0;
- (void)invokeClientDownloadCompletion:(long long)a0 asset:(id)a1 completionBlockWithError:(id /* block */)a2;
- (void)commonAssetDownload:(id)a0 options:(id)a1 then:(id /* block */)a2;
- (void)startDownload:(id)a0 completionWithError:(id /* block */)a1;
- (void)purge:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)createExtractor;
- (void)invokeClientDownloadCompletionAlreadyOnQueue:(long long)a0 asset:(id)a1 completionBlockWithError:(id /* block */)a2;
- (id)assetProperty:(id)a0;
- (long long)calculateTimeout;
- (void)purgeWithError:(id /* block */)a0;
- (BOOL)wasPreinstalled;
- (BOOL)wasInCatalog;
- (BOOL)wasDownloadable;
- (id)assetServerUrl;
- (void)startDownloadWithExtractor:(id /* block */)a0 completion:(id /* block */)a1;
- (long long)cancelDownloadSync;
- (void)configDownload:(id)a0 completion:(id /* block */)a1;
- (long long)configDownloadSync:(id)a0;
- (BOOL)spaceCheck:(long long *)a0;
- (BOOL)wasPurgeable;
- (BOOL)overrideGarbageCollectionThreshold:(unsigned long long)a0;
- (id)getLocalUrl;
- (void)cancelDownload:(id /* block */)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)getLocalFileUrl;
- (void)startDownload:(id)a0 then:(id /* block */)a1;
- (void)attachProgressCallBack:(id /* block */)a0;
- (id)initWithAttributes:(id)a0;

@end
