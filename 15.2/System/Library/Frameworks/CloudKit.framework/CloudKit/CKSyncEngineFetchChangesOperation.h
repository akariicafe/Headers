@class CKServerChangeToken, NSSet, NSOperationQueue, NSError, CKOperationGroup, CKDatabase;

@interface CKSyncEngineFetchChangesOperation : NSOperation {
    int _executionState;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) CKDatabase *database;
@property (copy, nonatomic) CKServerChangeToken *previousDatabaseServerChangeToken;
@property (retain, nonatomic) CKOperationGroup *group;
@property (nonatomic) BOOL shouldFetchDatabaseChanges;
@property (retain, nonatomic) NSSet *zoneIDs;
@property (copy, nonatomic) id /* block */ recordZoneWithIDChangedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasPurgedBlock;
@property (copy, nonatomic) id /* block */ databaseChangeTokenUpdatedBlock;
@property (copy, nonatomic) id /* block */ fetchDatabaseChangesCompletionBlock;
@property (copy, nonatomic) id /* block */ recordZoneChangesConfigurationBlock;
@property (copy, nonatomic) id /* block */ recordWasChangedBlock;
@property (copy, nonatomic) id /* block */ recordWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) id /* block */ recordZoneFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ willEnqueueOperationBlock;
@property (copy, nonatomic) id /* block */ fetchChangesCompletionBlock;

+ (void)setMaxZonesPerOperation:(unsigned long long)a0;
+ (unsigned long long)maxZonesPerOperation;

- (id)initWithDatabase:(id)a0;
- (void)transitionToExecuting;
- (BOOL)isFinished;
- (void)finishWithError:(id)a0;
- (void)fetchRecordZoneChanges;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;
- (void)fetchDatabaseChangesThenRecordZoneChanges;
- (id)cancelledError;
- (void)transitionToFinished;
- (void)cancel;

@end
