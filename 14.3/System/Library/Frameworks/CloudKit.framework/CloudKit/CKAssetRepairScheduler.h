@class NSURL, NSSet, NSOperationQueue, NSMutableDictionary, CKContainer, NSObject, NSMutableSet, CKUploadRequestConfiguration;
@protocol OS_dispatch_queue, OS_dispatch_source, CKAssetRepairSchedulerDelegate;

@interface CKAssetRepairScheduler : NSObject

@property (weak, nonatomic) CKContainer *container;
@property (copy, nonatomic) CKUploadRequestConfiguration *repairContainerOverrides;
@property (copy, nonatomic) NSURL *temporaryAssetDirectory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSOperationQueue *requestOperationQueue;
@property (retain, nonatomic) NSOperationQueue *uploadOperationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *uploadPendingRequestTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *uploadSuspensionTimer;
@property (retain, nonatomic) NSMutableDictionary *remainingAssetsToRequestCallbacks;
@property (retain, nonatomic) NSMutableDictionary *assetCache;
@property (readonly, nonatomic) NSSet *remainingAssets;
@property (readonly, nonatomic) NSSet *confirmedAvailableAssets;
@property (retain, nonatomic) NSMutableSet *confirmedMissingAssets;
@property (retain, nonatomic) NSMutableSet *assetsBeingRequested;
@property (retain, nonatomic) NSMutableSet *assetsBeingUploaded;
@property (retain, nonatomic) NSMutableDictionary *retryCountForAssets;
@property (weak) id<CKAssetRepairSchedulerDelegate> delegate;

+ (long long)repairBatchSizeLimit;
+ (long long)assetSizeEstimate;
+ (id)nameForEvent:(long long)a0;
+ (long long)repairBatchCountLimit;
+ (long long)estimatedSizeForAssetOrPackage:(id)a0;
+ (double)requestTimeout;
+ (long long)cacheSizeLimit;
+ (double)defaultSuspensionTime;
+ (long long)repairRetryCount;
+ (long long)canCopyFromFileURL:(id)a0 toDirectoryURL:(id)a1;
+ (long long)packageSizeEstimate;
+ (unsigned long long)diskSpaceBuffer;
+ (unsigned long long)remainingCapacityAtURL:(id)a0 error:(id *)a1;
+ (long long)cacheCountLimit;

- (unsigned long long)cacheSize;
- (void)cancelAllOperations;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1;
- (void)removeUploadRequestWithRecordID:(id)a0;
- (void)addUploadRequestsWithMetadata:(id)a0 requestBlocks:(id)a1;
- (void)dealloc;
- (unsigned long long)cacheCount;
- (id)allRemainingRequestableAssets;
- (void)respondToEvent:(long long)a0 withObject:(id)a1;
- (id)allRemainingUploadableAssets;
- (void)scheduleRequestsWithMaxCount:(long long)a0;
- (void)scheduleUploadBatch;
- (void)scheduleClearAssetCache;
- (void)cacheAsset:(id)a0 withMetadata:(id)a1;
- (void)removeAssetFromCacheWithMetadata:(id)a0;
- (id)clonedAsset:(id)a0 withError:(id *)a1;
- (BOOL)hasPendingWork;
- (void)tickle;
- (void)clearAssetCache;

@end
