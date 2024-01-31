@class NSString, CKSyncEngineFetchChangesOptions, NSOperationQueue, NSError, CKDatabase;

@interface CKSyncEngineFetchChangesOperation : NSOperation <CKPropertiesDescription> {
    int _executionState;
}

@property (class, nonatomic) unsigned long long maxZonesPerOperation;

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) CKSyncEngineFetchChangesOptions *options;
@property (copy, nonatomic) id /* block */ networkAttributionBundleIDOverrideBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDChangedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasPurgedBlock;
@property (copy, nonatomic) id /* block */ databaseChangeTokenUpdatedBlock;
@property (copy, nonatomic) id /* block */ fetchDatabaseChangesCompletionBlock;
@property (copy, nonatomic) id /* block */ willBeginFetchingChangesForZoneIDsBlock;
@property (copy, nonatomic) id /* block */ databaseChangesConfigurationBlock;
@property (copy, nonatomic) id /* block */ nextRecordZoneChangesConfigurationsBlock;
@property (copy, nonatomic) id /* block */ recordWasChangedBlock;
@property (copy, nonatomic) id /* block */ recordWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) id /* block */ recordZoneFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ willEnqueueOperationBlock;
@property (copy, nonatomic) id /* block */ fetchChangesCompletionBlock;
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
- (void)fetchDatabaseChangesThenRecordZoneChangesWithDatabaseChangeToken:(id)a0;
- (void)fetchRecordZoneChangesIfNecessaryOrFinish;
- (void)fetchRecordZoneChangesWithZoneIDs:(id)a0 configurations:(id)a1 fetchAllChanges:(BOOL)a2 shouldFetchAssetContents:(BOOL)a3;

@end
