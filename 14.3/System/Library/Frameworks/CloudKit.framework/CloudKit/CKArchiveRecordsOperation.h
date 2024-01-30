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

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)performCKOperation;
- (id)initWithRecordIDs:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleRecordArchivalForRecordID:(id)a0 error:(id)a1;
- (BOOL)hasCKOperationCallbacksSet;

@end
