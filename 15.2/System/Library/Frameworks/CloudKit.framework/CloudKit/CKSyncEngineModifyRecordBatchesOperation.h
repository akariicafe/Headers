@class NSSet, NSOperationQueue, NSError, CKOperationGroup, CKDatabase;

@interface CKSyncEngineModifyRecordBatchesOperation : NSOperation {
    int _executionState;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) CKDatabase *database;
@property (retain, nonatomic) CKOperationGroup *group;
@property (copy, nonatomic) id /* block */ populateNextBatchBlock;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock;
@property (copy, nonatomic) id /* block */ perRecordSaveBlock;
@property (copy, nonatomic) id /* block */ perRecordDeleteBlock;
@property (copy, nonatomic) id /* block */ batchCompletionBlock;
@property (copy, nonatomic) id /* block */ modifyRecordBatchesCompletionBlock;
@property (copy, nonatomic) id /* block */ willEnqueueOperationBlock;
@property (retain, nonatomic) NSSet *zoneIDs;

- (id)initWithDatabase:(id)a0;
- (void)transitionToExecuting;
- (BOOL)isFinished;
- (void)finishWithError:(id)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;
- (void)addNextModifyOperationOrFinishIfNoRemainingWork;
- (id)cancelledError;
- (void)transitionToFinished;
- (id)operationToModifyBatch:(id)a0;
- (void)cancel;

@end
