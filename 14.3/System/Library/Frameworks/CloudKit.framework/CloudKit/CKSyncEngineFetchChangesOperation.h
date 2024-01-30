@class CKServerChangeToken, NSSet, NSOperationQueue, NSError, CKOperationGroup, CKDatabase;

@interface CKSyncEngineFetchChangesOperation : NSOperation

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;
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
@property (copy, nonatomic) id /* block */ recordChangedBlock;
@property (copy, nonatomic) id /* block */ recordWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) id /* block */ recordZoneFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ willEnqueueOperationBlock;
@property (copy, nonatomic) id /* block */ fetchChangesCompletionBlock;

+ (unsigned long long)maxZonesPerOperation;
+ (void)setMaxZonesPerOperation:(unsigned long long)a0;

- (void)cancel;
- (void)finishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)isAsynchronous;
- (id)cancelledError;
- (void)fetchDatabaseChangesThenRecordZoneChanges;
- (void)start;
- (void)fetchRecordZoneChanges;

@end
