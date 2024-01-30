@class NSOperationQueue, NSMutableDictionary, NSMutableSet, NSURL, CKUploadRequestConfiguration, NSObject, CKContainer;
@protocol OS_dispatch_queue, OS_dispatch_source, CKAssetRepairSchedulerDelegate;

@interface CKAssetRepairScheduler : NSObject {
    CKContainer *_container;
    CKUploadRequestConfiguration *_repairContainerOverrides;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_requestOperationQueue;
    NSOperationQueue *_uploadOperationQueue;
    NSObject<OS_dispatch_source> *_uploadPendingRequestTimer;
    NSObject<OS_dispatch_source> *_uploadSuspensionTimer;
    NSMutableDictionary *_remainingAssetsToRequestCallbacks;
    NSMutableDictionary *_assetCache;
    NSMutableSet *_confirmedMissingAssets;
    NSMutableSet *_assetsBeingRequested;
    NSMutableSet *_assetsBeingUploaded;
    NSMutableDictionary *_retryCountForAssets;
}

@property (copy, nonatomic) NSURL *temporaryAssetDirectory;
@property (weak) id<CKAssetRepairSchedulerDelegate> delegate;

+ (long long)cacheCountLimit;
+ (id)nameForEvent:(long long)a0;
+ (long long)estimatedSizeForAssetOrPackage:(id)a0;
+ (long long)repairBatchCountLimit;
+ (double)requestTimeout;
+ (double)defaultSuspensionTime;
+ (long long)repairRetryCount;
+ (long long)canCopyFromFileURL:(id)a0 toDirectoryURL:(id)a1;
+ (unsigned long long)remainingCapacityAtURL:(id)a0 error:(id *)a1;

- (void)tickle;
- (id)allRemainingUploadableAssets;
- (id)allRemainingRequestableAssets;
- (BOOL)hasPendingWork;
- (void)addUploadRequestsWithMetadata:(id)a0 requestBlocks:(id)a1;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1;
- (void)clearAssetCache;
- (void).cxx_destruct;
- (void)removeUploadRequestWithRecordID:(id)a0;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)clonedAsset:(id)a0 withError:(id *)a1;

@end
