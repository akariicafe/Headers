@class NSMutableDictionary, CKSyncEngineSendChangesOptions, NSOperationQueue, NSError, NSString, CKDatabase;

@interface CKSyncEngineSendChangesOperation : NSOperation <CKPropertiesDescription> {
    int _executionState;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableDictionary *errorsByRecordID;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) CKSyncEngineSendChangesOptions *options;
@property (nonatomic) unsigned long long maxZoneCountPerBatch;
@property (nonatomic) BOOL continueModifyingPendingChangesAfterFailure;
@property (nonatomic) BOOL repeatZoneModificationsUntilNoneLeft;
@property (copy, nonatomic) id /* block */ networkAttributionBundleIDOverrideBlock;
@property (copy, nonatomic) id /* block */ populateNextBatchBlock;
@property (copy, nonatomic) id /* block */ pendingDatabaseChangesBlock;
@property (copy, nonatomic) id /* block */ modifyRecordZonesCompletionBlock;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock;
@property (copy, nonatomic) id /* block */ perRecordSaveBlock;
@property (copy, nonatomic) id /* block */ perRecordDeleteBlock;
@property (copy, nonatomic) id /* block */ batchCompletionBlock;
@property (copy, nonatomic) id /* block */ modifyPendingChangesCompletionBlock;
@property (copy, nonatomic) id /* block */ willEnqueueOperationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_removesDependenciesAfterFinish;

- (void)CKDescribePropertiesUsing:(id)a0;
- (BOOL)isExecuting;
- (id)init;
- (id)redactedDescription;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)transitionToFinished;
- (void)transitionToExecuting;
- (id)cancelledError;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishWithError:(id)a0;
- (id)initWithDatabase:(id)a0 options:(id)a1;
- (id)CKDescriptionClassName;
- (void)addNextModifyOperationOrFinishIfNoRemainingWorkIncludingZoneChanges:(BOOL)a0;
- (BOOL)addNextModifyRecordZonesBatch;
- (void)addNextModifyRecordsBatchWithCompletionHandler:(id /* block */)a0;
- (id)operationToModifyBatch:(id)a0;

@end
