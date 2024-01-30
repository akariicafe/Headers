@class NSString, NSMutableDictionary, NSSet, NSOperationQueue, NSError, CKOperationGroup, CKDatabase;

@interface CKSyncEngineModifyPendingChangesOperation : NSOperation <CKPropertiesDescription> {
    int _executionState;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableDictionary *errorsByRecordID;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL startedInitialModifyZonesCheck;
@property (readonly, nonatomic) CKDatabase *database;
@property (retain, nonatomic) CKOperationGroup *group;
@property (nonatomic) unsigned long long maxZoneCountPerBatch;
@property (nonatomic) BOOL continueModifyingPendingChangesAfterFailure;
@property (copy, nonatomic) id /* block */ networkAttributionBundleIDOverrideBlock;
@property (copy, nonatomic) id /* block */ populateNextBatchBlock;
@property (copy, nonatomic) id /* block */ zoneIDsToSaveAndDeleteBlock;
@property (copy, nonatomic) id /* block */ modifyRecordZonesCompletionBlock;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock;
@property (copy, nonatomic) id /* block */ perRecordSaveBlock;
@property (copy, nonatomic) id /* block */ perRecordDeleteBlock;
@property (copy, nonatomic) id /* block */ batchCompletionBlock;
@property (copy, nonatomic) id /* block */ modifyPendingChangesCompletionBlock;
@property (copy, nonatomic) id /* block */ willEnqueueOperationBlock;
@property (retain, nonatomic) NSSet *zoneIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_removesDependenciesAfterFinish;

- (void)CKDescribePropertiesUsing:(id)a0;
- (void)finishWithError:(id)a0;
- (void)transitionToFinished;
- (void)transitionToExecuting;
- (id)initWithDatabase:(id)a0;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)redactedDescription;
- (void)cancel;
- (id)operationToModifyBatch:(id)a0;
- (BOOL)isAsynchronous;
- (void)addNextModifyRecordZonesBatch;
- (id)init;
- (void)start;
- (void)addNextModifyRecordsBatch;
- (id)cancelledError;
- (void)addNextModifyOperationOrFinishIfNoRemainingWork;
- (void).cxx_destruct;

@end
