@class NSString, CKRecordID, CKUploadRequestConfiguration, CKMarkAssetBrokenOperationInfo;
@protocol CKMarkAssetBrokenOperationCallbacks;

@interface CKMarkAssetBrokenOperation : CKDatabaseOperation <CKMarkAssetBrokenOperationCallbacks>

@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *field;
@property (nonatomic) long long listIndex;
@property (retain, nonatomic) CKRecordID *repairRecordID;
@property (readonly, nonatomic) id<CKMarkAssetBrokenOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKMarkAssetBrokenOperationInfo *operationInfo;
@property (copy, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (readonly, copy, nonatomic) CKUploadRequestConfiguration *resolvedUploadRequestConfiguration;
@property (copy, nonatomic) id /* block */ markAssetBrokenCompletionBlock;
@property (nonatomic) BOOL touchRepairZone;
@property (nonatomic) BOOL bypassPCSEncryptionForTouchRepairZone;
@property (nonatomic) BOOL simulateCorruptAsset;
@property (nonatomic) BOOL writeRepairRecord;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)performCKOperation;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:(id)a0;
- (id)initWithRecordID:(id)a0 field:(id)a1;
- (id)initWithRecordID:(id)a0 field:(id)a1 listIndex:(long long)a2;
- (id)initWithNoRecord;
- (void)handleMarkAssetBrokenCompletionWithRepairRecordID:(id)a0 error:(id)a1;
- (BOOL)hasCKOperationCallbacksSet;

@end
