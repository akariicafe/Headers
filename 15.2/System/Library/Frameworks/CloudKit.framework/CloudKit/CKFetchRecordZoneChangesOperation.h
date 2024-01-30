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
@property (nonatomic) long long errorReportingStyle;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) BOOL fetchAllChanges;
@property (copy, nonatomic) id /* block */ recordChangedBlock;
@property (copy, nonatomic) id /* block */ recordWasChangedBlock;
@property (copy, nonatomic) id /* block */ recordWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) id /* block */ recordZoneFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordZoneChangesCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillOutOperationInfo:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (id)relevantZoneIDs;
- (id)recordZoneIDsWithPendingArchivedRecords;
- (void)handleChangeForRecordID:(id)a0 record:(id)a1 error:(id)a2;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)handleChangeSetCompletionForRecordZoneID:(id)a0 serverChangeToken:(id)a1 clientChangeTokenData:(id)a2 recordChangesStatus:(long long)a3 hasPendingArchivedRecords:(BOOL)a4 error:(id)a5 reply:(id /* block */)a6;
- (id)recordZoneChangesStatusByZoneID;
- (long long)changeTypesFromSetCallbacks;
- (id)partialFailureForItemsInZone:(id)a0;
- (id)initWithRecordZoneIDs:(id)a0 configurationsByRecordZoneID:(id)a1;
- (void)handleDeleteForRecordID:(id)a0 recordType:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)initWithRecordZoneIDs:(id)a0 optionsByRecordZoneID:(id)a1;

@end
