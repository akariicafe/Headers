@class NSDictionary, NSArray, NSMapTable, CKDCancelTokenGroup, CKDAssetRequestPlanner, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CKDUploadAssetsOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *assetsToUpload;
@property (retain, nonatomic) NSMapTable *uploadTasksByPackages;
@property (retain, nonatomic) NSMutableArray *packageManifests;
@property (retain, nonatomic) NSMutableArray *openedPackages;
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens;
@property (nonatomic) unsigned long long maxPackageUploadsPerBatch;
@property (retain, nonatomic) CKDAssetRequestPlanner *assetRequestPlanner;
@property (retain, nonatomic) NSDictionary *assetUUIDToExpectedProperties;
@property (retain, nonatomic) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic) BOOL temporary;
@property (copy, nonatomic) id /* block */ uploadPreparationBlock;
@property (copy, nonatomic) id /* block */ uploadProgressBlock;
@property (copy, nonatomic) id /* block */ uploadCompletionBlock;
@property (nonatomic) BOOL atomic;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;

+ (long long)isPredominatelyDownload;

- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)finishWithError:(id)a0;
- (BOOL)_prepareForUpload;
- (int)operationType;
- (void)_didUploadMMCSItem:(id)a0 error:(id)a1;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)_collectMetricsFromCompletedItemGroup:(id)a0;
- (BOOL)supportsClearAssetEncryption;
- (id)nameForState:(unsigned long long)a0;
- (void)_didMakeProgressForAsset:(id)a0 progress:(double)a1;
- (void)_didMakeProgressForMMCSSectionItem:(id)a0 task:(id)a1;
- (void)_didUploadMMCSSectionItem:(id)a0 task:(id)a1 error:(id)a2;
- (void)_closePackage:(id)a0;
- (void)_uploadPackageSection:(id)a0 task:(id)a1 completionBlock:(id /* block */)a2;
- (void)_didMakeProgressForMMCSItem:(id)a0;
- (BOOL)_openPackage:(id)a0;
- (void)main;
- (void)_didUploadClonedPackageWithTask:(id)a0;
- (void)_didUploadMMCSItems:(id)a0 error:(id)a1;
- (void)_didPrepareAsset:(id)a0;
- (BOOL)_upload;
- (id)CKStatusReportLogGroups;
- (void)_collectMetricsFromCompletedItemGroupSet:(id)a0;
- (void)_uploadPackageSectionsWithPendingTasks:(id)a0 uploadingTasks:(id)a1 completedTasks:(id)a2;
- (void)cancel;
- (BOOL)_didFetchUploadTokensForAssetTokenRequest:(id)a0 error:(id)a1 newError:(id *)a2;
- (void)_didPrepareAssetBatch:(id)a0 error:(id)a1;
- (void)_uploadPackageSectionsWithEnumerator:(id)a0 task:(id)a1 completionBlock:(id /* block */)a2;
- (void)_didUploadPackageWithTask:(id)a0;
- (BOOL)_fetchConfiguration;
- (void)_collectMetricsFromMMCSOperationMetrics:(id)a0;
- (void)_closeAllPackages;
- (void)_didUploadAsset:(id)a0 error:(id)a1;
- (void)_didGetChunkKeysForAssetBatch:(id)a0 error:(id)a1;
- (BOOL)_fetchUploadTokens;
- (void)_uploadPackageSectionsWithTask:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_didPutChunkKeysForAssetBatch:(id)a0 error:(id)a1;
- (void)_didUploadMMCSSectionItems:(id)a0 task:(id)a1 error:(id)a2;
- (BOOL)_planSectionsForPackage:(id)a0 error:(id *)a1;
- (void)_removePackageManifests;
- (void)_failAllItemsInAssetBatch:(id)a0 error:(id)a1;

@end
