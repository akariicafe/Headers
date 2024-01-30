@class CKServerChangeToken, CKFetchDatabaseChangesOperationInfo;
@protocol CKFetchDatabaseChangesOperationCallbacks;

@interface CKFetchDatabaseChangesOperation : CKDatabaseOperation <CKFetchDatabaseChangesOperationCallbacks>

@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic) long long status;
@property (readonly, nonatomic) id<CKFetchDatabaseChangesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchDatabaseChangesOperationInfo *operationInfo;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) BOOL fetchAllChanges;
@property (copy, nonatomic) id /* block */ recordZoneWithIDChangedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasPurgedBlock;
@property (copy, nonatomic) id /* block */ changeTokenUpdatedBlock;
@property (copy, nonatomic) id /* block */ fetchDatabaseChangesCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)performCKOperation;
- (id)init;
- (void)handleChangeSetCompletionWithServerChangeToken:(id)a0 databaseChangesStatus:(long long)a1 error:(id)a2 reply:(id /* block */)a3;
- (void)handleChangeForRecordZoneID:(id)a0;
- (void)handleDeleteForRecordZoneID:(id)a0;
- (void)handlePurgeForRecordZoneID:(id)a0;
- (void).cxx_destruct;
- (id)initWithPreviousServerChangeToken:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;

@end
