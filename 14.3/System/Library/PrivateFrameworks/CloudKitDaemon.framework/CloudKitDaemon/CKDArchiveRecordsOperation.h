@class NSArray;
@protocol CKArchiveRecordsOperationCallbacks;

@interface CKDArchiveRecordsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) id<CKArchiveRecordsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ recordArchivedBlock;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (void)main;
- (int)operationType;
- (void)_handleRecordArchived:(id)a0 responseCode:(id)a1;

@end
