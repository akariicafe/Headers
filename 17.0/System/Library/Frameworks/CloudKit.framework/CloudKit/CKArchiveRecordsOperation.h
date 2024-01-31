@class NSArray, NSMutableDictionary, CKArchiveRecordsOperationInfo;
@protocol CKArchiveRecordsOperationCallbacks;

@interface CKArchiveRecordsOperation : CKDatabaseOperation <CKArchiveRecordsOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *perItemErrors;
@property (readonly, nonatomic) id<CKArchiveRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKArchiveRecordsOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) id /* block */ recordArchivedBlock;
@property (copy, nonatomic) id /* block */ archiveRecordsCompletionBlock;

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
- (id)initWithRecordIDs:(id)a0;
- (void).cxx_destruct;
- (void)handleRecordArchivalForRecordID:(id)a0 error:(id)a1;

@end
