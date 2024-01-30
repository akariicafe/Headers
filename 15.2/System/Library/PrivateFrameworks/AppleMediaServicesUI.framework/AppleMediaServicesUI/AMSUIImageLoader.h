@class NSObject, AMSUIAssetQueue, AMSURLSession, NSCache;
@protocol OS_dispatch_queue;

@interface AMSUIImageLoader : NSObject

@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) AMSUIAssetQueue *fetchQueue;
@property (retain, nonatomic) AMSURLSession *urlSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)defaultLoader;

- (void).cxx_destruct;
- (id)init;
- (id)fetchImageWithURL:(id)a0;
- (id)fetchImageWithURL:(id)a0 searchBundles:(id)a1;
- (id)_fetchImageWithURL:(id)a0 searchBundles:(id)a1 atPriority:(long long)a2;
- (id)_fetchImageFromCacheWithURL:(id)a0;
- (id)_makeOperationForImageWithURL:(id)a0 searchBundles:(id)a1 error:(id *)a2;
- (id)_performLowLatencyOperation:(id)a0;
- (void)_cacheImage:(id)a0 withURL:(id)a1;
- (BOOL)_isURLSystemImage:(id)a0;
- (BOOL)_isURLBundleResource:(id)a0;

@end
