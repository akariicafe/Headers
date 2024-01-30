@class NSMutableDictionary, NSDictionary, NSMutableSet, CKFetchRecordZoneChangesOperationInfo, NSArray;
@protocol CKFetchRecordZoneChangesOperationCallbacks;

@interface CKFetchRecordZoneChangesOperation : CKDatabaseOperation <CKFetchRecordZoneChangesOperationCallbacks>

@property (copy, nonatomic) NSDictionary *optionsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *statusByZoneID;
@property (retain, nonatomic) NSMutableSet *zoneIDsWithPendingArchivedRecords;
@property (nonatomic) BOOL shouldFetchAssetContents;
@property (retain, nonatomic) NSMutableDictionary *perItemErrors;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (copy, nonatomic) id /* block */ perRecordChangeCompletionBlock;
@property (nonatomic) BOOL shouldReportAllPerItemFailures;
@property (readonly, nonatomic) id<CKFetchRecordZoneChangesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchRecordZoneChangesOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) BOOL fetchAllChanges;
@property (copy, nonatomic) id /* block */ recordChangedBlock;
@property (copy, nonatomic) id /* block */ recordWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) id /* block */ recordZoneFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordZoneChangesCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)performCKOperation;
- (void)handleChangeSetCompletionForRecordZoneID:(id)a0 serverChangeToken:(id)a1 clientChangeTokenData:(id)a2 recordChangesStatus:(long long)a3 hasPendingArchivedRecords:(BOOL)a4 error:(id)a5 reply:(id /* block */)a6;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRecordZoneIDs:(id)a0 configurationsByRecordZoneID:(id)a1;
- (id)relevantZoneIDs;
- (long long)changeTypesFromSetCallbacks;
- (void)handleChangeForRecordID:(id)a0 record:(id)a1 error:(id)a2;
- (id)partialFailureForItemsInZone:(id)a0;
- (void)handleDeleteForRecordID:(id)a0 recordType:(id)a1;
- (id)recordZoneChangesStatusByZoneID;
- (id)recordZoneIDsWithPendingArchivedRecords;
- (id)initWithRecordZoneIDs:(id)a0 optionsByRecordZoneID:(id)a1;
- (void)fillOutOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;

@end
