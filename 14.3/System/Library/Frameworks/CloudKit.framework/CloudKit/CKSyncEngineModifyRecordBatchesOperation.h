@class NSSet, NSOperationQueue, NSError, CKOperationGroup, CKDatabase;

@interface CKSyncEngineModifyRecordBatchesOperation : NSOperation

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;
@property (readonly, nonatomic) CKDatabase *database;
@property (retain, nonatomic) CKOperationGroup *group;
@property (copy, nonatomic) id /* block */ populateNextBatchBlock;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock;
@property (copy, nonatomic) id /* block */ perRecordSaveCompletionBlock;
@property (copy, nonatomic) id /* block */ batchCompletionBlock;
@property (copy, nonatomic) id /* block */ modifyRecordBatchesCompletionBlock;
@property (copy, nonatomic) id /* block */ willEnqueueOperationBlock;
@property (retain, nonatomic) NSSet *zoneIDs;

- (void)cancel;
- (void)finishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)isAsynchronous;
- (id)cancelledError;
- (void)addNextModifyOperationOrFinishIfNoRemainingWork;
- (id)operationToModifyBatch:(id)a0;
- (void)start;

@end
