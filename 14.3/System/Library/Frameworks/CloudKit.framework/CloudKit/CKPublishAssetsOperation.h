@class NSArray, NSMutableDictionary, CKPublishAssetsOperationInfo, NSDictionary;
@protocol CKPublishAssetsOperationCallbacks;

@interface CKPublishAssetsOperation : CKDatabaseOperation <CKPublishAssetsOperationCallbacks>

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSMutableDictionary *perItemErrorsByRecordID;
@property (readonly, nonatomic) id<CKPublishAssetsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKPublishAssetsOperationInfo *operationInfo;
@property (copy, nonatomic) NSDictionary *fileNamesByAssetFieldNames;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (copy, nonatomic) id /* block */ assetPublishedBlock;
@property (copy, nonatomic) id /* block */ publishAssetCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)performCKOperation;
- (id)initWithRecordIDs:(id)a0;
- (void).cxx_destruct;
- (void)handleAssetPublishCompletionForRecordID:(id)a0 publishedAsset:(id)a1 recordKey:(id)a2 error:(id)a3;
- (void)fillOutOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;

@end
