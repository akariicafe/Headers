@class NSArray, NSMapTable, CKDCancelTokenGroup, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKDDownloadAssetsOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *assetsToDownload;
@property (retain, nonatomic) NSArray *packageIndexSets;
@property (retain, nonatomic) NSArray *assetsToDownloadInMemory;
@property (retain, nonatomic) NSArray *assetURLInfosToFillOut;
@property (retain, nonatomic) NSMutableArray *MMCSItemsToDownload;
@property (retain, nonatomic) NSMutableArray *MMCSItemsToDownloadInMemory;
@property (retain, nonatomic) NSMutableArray *assetsToDownloadFromTranscoder;
@property (retain, nonatomic) NSMutableArray *assetsToDownloadFromTranscoderInMemory;
@property (retain, nonatomic) NSMapTable *downloadTasksByPackages;
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens;
@property (nonatomic) unsigned long long maxPackageDownloadsPerBatch;
@property (copy, nonatomic) id /* block */ downloadPreparationBlock;
@property (copy, nonatomic) id /* block */ downloadProgressBlock;
@property (copy, nonatomic) id /* block */ downloadCommandBlock;
@property (copy, nonatomic) id /* block */ downloadCompletionBlock;
@property (copy, nonatomic) id /* block */ urlFilledOutBlock;
@property (retain, nonatomic) NSMutableDictionary *keyOrErrorForHostname;

- (id)activityCreate;
- (id)CKStatusReportLogGroups;
- (id)nameForState:(unsigned long long)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)supportsClearAssetEncryption;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)_didDownloadMMCSItems:(id)a0 inMemory:(BOOL)a1 error:(id)a2;
- (void)_didDownloadMMCSSectionItem:(id)a0 task:(id)a1 error:(id)a2;
- (BOOL)_postProcess;
- (void)_collectMetricsFromMMCSOperationMetrics:(id)a0;
- (BOOL)_prepareForDownload;
- (void)_didMakeProgressForAsset:(id)a0 progress:(double)a1;
- (void)_didMakeProgressForMMCSItem:(id)a0 inMemory:(BOOL)a1;
- (id)_tryToFillInTheDerivativeTemplateWithAsset:(id)a0;
- (BOOL)_download;
- (void)_didPrepareAsset:(id)a0;
- (void)_collectMetricsFromCompletedItemGroup:(id)a0;
- (void)_downloadTranscodedAsset:(id)a0 inMemory:(BOOL)a1;
- (void)_didDownloadAsset:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (void)_didCommandForAsset:(id)a0 command:(id)a1;
- (void)_removeUntrackedMMCSItems:(id)a0;
- (void)_downloadPackageSectionAtIndex:(long long)a0 task:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)shouldDownloadAssetFromTranscoder:(id)a0;
- (void)_didDownloadMMCSItem:(id)a0 inMemory:(BOOL)a1 error:(id)a2;
- (void)_didCommandForMMCSItem:(id)a0 command:(id)a1;
- (void)_downloadMMCSItems:(id)a0 downloadTasksByPackages:(id)a1 shouldFetchAssetContentInMemory:(BOOL)a2;
- (void)_downloadPackageSectionsWithTask:(id)a0 completionBlock:(id /* block */)a1;
- (void)_collectMetricsFromCompletedItemGroupSet:(id)a0;
- (void)_downloadPackageSectionsWithPendingTasks:(id)a0 downloadingTasks:(id)a1 completedTasks:(id)a2;
- (void)_didDownloadMMCSSectionItems:(id)a0 task:(id)a1 error:(id)a2;
- (void)cancel;
- (void)_didMakeProgressForMMCSSectionItem:(id)a0 task:(id)a1;
- (void)_downloadPackageSectionsWithSectionEnumerator:(id)a0 task:(id)a1 completionBlock:(id /* block */)a2;

@end
