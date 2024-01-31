@class NSData, CKSerializeRecordModificationsOperationInfo, NSArray;
@protocol CKSerializeRecordModificationsOperationCallbacks;

@interface CKSerializeRecordModificationsOperation : CKDatabaseOperation <CKSerializeRecordModificationsOperationCallbacks>

@property (copy, nonatomic) NSData *serializedModifications;
@property (readonly, nonatomic) id<CKSerializeRecordModificationsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKSerializeRecordModificationsOperationInfo *operationInfo;
@property (retain, nonatomic) NSArray *recordsToSave;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (copy, nonatomic) id /* block */ serializeCompletionBlock;

+ (SEL)daemonInvocationSelector;

- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithRecordsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)performCKOperation;
- (void)ckSignpostBegin;
- (id)init;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void).cxx_destruct;
- (void)handleSerialization:(id)a0 error:(id)a1;

@end
