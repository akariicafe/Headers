@class NSArray, NSMutableDictionary, CKRepairAssetsOperationInfo, CKUploadRequestConfiguration;
@protocol CKRepairAssetsOperationCallbacks;

@interface CKRepairAssetsOperation : CKDatabaseOperation <CKRepairAssetsOperationCallbacks>

@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSArray *packages;
@property (retain, nonatomic) NSArray *assetMetadata;
@property (retain, nonatomic) NSArray *packageMetadata;
@property (retain, nonatomic) NSArray *unavailableAssets;
@property (retain, nonatomic) NSArray *unavailablePackages;
@property (retain, nonatomic) NSMutableDictionary *perItemErrorsByRecordID;
@property (readonly, nonatomic) id<CKRepairAssetsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKRepairAssetsOperationInfo *operationInfo;
@property (copy, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (readonly, copy, nonatomic) CKUploadRequestConfiguration *resolvedUploadRequestConfiguration;
@property (copy, nonatomic) id /* block */ repairAssetsCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)performCKOperation;
- (void)ckSignpostBegin;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void).cxx_destruct;
- (void)handleAssetRepairCompletionForRecordID:(id)a0 error:(id)a1;
- (id)includedMetadata;
- (id)initWithAssets:(id)a0 packages:(id)a1 assetMetadata:(id)a2 packageMetadata:(id)a3 unavailableAssets:(id)a4 unavailablePackages:(id)a5;

@end
