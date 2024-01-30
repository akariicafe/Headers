@class NSArray, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PHImportUrlSource : PHImportSource {
    NSObject<OS_dispatch_queue> *_pendingAssetDataRequestQueue;
    NSObject<OS_dispatch_queue> *_activeAssetDataRequestQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentAssetDataRequestSemaphore;
    NSString *_prefix;
}

@property (retain, nonatomic) NSArray *urls;
@property (nonatomic) BOOL isReadonlyVolume;
@property (retain, nonatomic) NSMutableDictionary *pathsByFileBaseName;
@property (retain, nonatomic) NSArray *baseNames;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pathsByFileBaseNameAccess;

+ (BOOL)treatAsReadonlyVolume:(id)a0;

- (BOOL)canReference;
- (id)prefix;
- (id)path;
- (void)setPrefix:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAvailable;
- (void)dealloc;
- (unsigned long long)hash;
- (void)beginWork;
- (BOOL)isEqual:(id)a0;
- (id)volumePath;
- (id)productKind;
- (id)name;
- (id)initWithUrls:(id)a0;
- (BOOL)isEqualToImportUrlSource:(id)a0;
- (id)assetsByProcessingItem:(id)a0;
- (void)dispatchAssetDataRequestAsyncUsingBlock:(id /* block */)a0;
- (id)rootUrlOfUrls:(id)a0;
- (void)endWork;

@end
