@class NSArray, CKDeserializeRecordModificationsOperationInfo, NSData;
@protocol CKDeserializeRecordModificationsOperationCallbacks;

@interface CKDeserializeRecordModificationsOperation : CKDatabaseOperation <CKDeserializeRecordModificationsOperationCallbacks>

@property (copy, nonatomic) NSArray *recordsToSave;
@property (copy, nonatomic) NSArray *recordIDsToDelete;
@property (readonly, nonatomic) id<CKDeserializeRecordModificationsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKDeserializeRecordModificationsOperationInfo *operationInfo;
@property (retain, nonatomic) NSData *serializedModifications;
@property (copy, nonatomic) id /* block */ deserializeCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)ckSignpostBegin;
- (id)init;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void).cxx_destruct;
- (void)handleDeserializationOfSaves:(id)a0 deletes:(id)a1 error:(id)a2;
- (id)initWithSerializedModifications:(id)a0;

@end
