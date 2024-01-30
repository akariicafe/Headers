@class NSArray, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PHImportUrlSource : PHImportSource {
    NSObject<OS_dispatch_queue> *_pendingAssetDataRequestQueue;
    NSObject<OS_dispatch_queue> *_activeAssetDataRequestQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentAssetDataRequestSemaphore;
    NSString *_prefix;
}

@property (retain, nonatomic) NSArray *baseNames;
@property (retain, nonatomic) NSArray *urls;
@property (nonatomic) BOOL isReadonlyVolume;
@property (retain, nonatomic) NSDictionary *resourcePathsByIdentifier;

+ (BOOL)treatAsReadonlyVolume:(id)a0;

- (id)prefix;
- (id)volumePath;
- (id)rootUrlOfUrls:(id)a0;
- (void)setPrefix:(id)a0;
- (BOOL)isEqualToImportUrlSource:(id)a0;
- (id)resourcePathsInUrls:(id)a0;
- (void)beginProcessingWithCompletion:(id /* block */)a0;
- (id)assetsByProcessingItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dispatchAssetDataRequestAsyncUsingBlock:(id /* block */)a0;
- (id)productKind;
- (id)initWithUrls:(id)a0;
- (void)endWork;
- (BOOL)containsSupportedMediaWithImportExceptions:(id *)a0;
- (id)name;
- (BOOL)canReference;
- (id)path;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isAvailable;

@end
