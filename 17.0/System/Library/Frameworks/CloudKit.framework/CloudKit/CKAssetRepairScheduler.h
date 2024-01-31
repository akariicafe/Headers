@class NSObject, NSMutableDictionary, NSOperationQueue, NSURL, NSMutableSet, CKUploadRequestConfiguration, CKContainer;
@protocol OS_dispatch_queue, OS_dispatch_source, CKAssetRepairSchedulerDelegate;

@interface CKAssetRepairScheduler : NSObject {
    NSMutableDictionary *_remainingAssetsToRequestCallbacks;
    NSMutableDictionary *_assetCache;
    NSMutableSet *_confirmedMissingAssets;
    NSMutableSet *_assetsBeingRequested;
    NSMutableSet *_assetsBeingUploaded;
    CKContainer *_container;
    CKUploadRequestConfiguration *_repairContainerOverrides;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_requestOperationQueue;
    NSOperationQueue *_uploadOperationQueue;
    NSObject<OS_dispatch_source> *_uploadPendingRequestTimer;
    NSObject<OS_dispatch_source> *_uploadSuspensionTimer;
    NSMutableDictionary *_retryCountForAssets;
}

@property (readonly, copy) NSURL *temporaryAssetDirectory;
@property (nonatomic) double requestTimeout;
@property (nonatomic) long long repairBatchCountLimit;
@property (nonatomic) long long cacheCountLimit;
@property (nonatomic) double defaultSuspensionTime;
@property (nonatomic) long long repairRetryCount;
@property (weak) id<CKAssetRepairSchedulerDelegate> delegate;

+ (long long)estimatedSizeForAssetOrPackage:(id)a0;
+ (long long)canCopyFromFileURL:(id)a0 toDirectoryURL:(id)a1;
+ (id)nameForEvent:(long long)a0;
+ (unsigned long long)remainingCapacityAtURL:(id)a0 error:(id *)a1;

- (void)cancelAllOperations;
- (BOOL)hasPendingWork;
- (void)dealloc;
- (id)allRemainingUploadableAssets;
- (void)removeUploadRequestWithRecordID:(id)a0;
- (void)clearAssetCache;
- (void)addUploadRequestsWithMetadata:(id)a0 requestBlocks:(id)a1;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1;
- (id)allRemainingRequestableAssets;
- (void).cxx_destruct;
- (id)clonedAsset:(id)a0 withError:(id *)a1;
- (void)tickle;

@end
