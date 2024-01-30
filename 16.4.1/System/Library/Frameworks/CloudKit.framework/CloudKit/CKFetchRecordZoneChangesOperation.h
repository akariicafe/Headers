@class NSMutableDictionary, NSDictionary, NSMutableSet, CKFetchRecordZoneChangesOperationInfo, NSArray;
@protocol CKFetchRecordZoneChangesOperationCallbacks;

@interface CKFetchRecordZoneChangesOperation : CKDatabaseOperation <CKFetchRecordZoneChangesOperationCallbacks> {
    unsigned long long _mergeableValueCount;
    unsigned long long _mergeableDeltaCount;
    unsigned long long _assetBackedMergeableDeltaCount;
}

@property (copy, nonatomic) NSDictionary *optionsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *statusByZoneID;
@property (retain, nonatomic) NSMutableSet *zoneIDsWithPendingArchivedRecords;
@property (retain, nonatomic) NSMutableSet *zoneIDsWithSyncObligations;
@property (nonatomic) BOOL shouldFetchAssetContents;
@property (retain, nonatomic) NSMutableDictionary *perItemErrors;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (copy, nonatomic) NSDictionary *supplementalChangeTokenByZoneID;
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

+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)fillOutOperationInfo:(id)a0;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)ckSignpostBegin;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)performCKOperation;
- (id)activityCreate;
- (id)relevantZoneIDs;
- (void)handleChangeForRecordID:(id)a0 record:(id)a1 error:(id)a2;
- (id)initWithRecordZoneIDs:(id)a0 configurationsByRecordZoneID:(id)a1;
- (long long)changeTypesFromSetCallbacks;
- (void)handleChangeSetCompletionForRecordZoneID:(id)a0 serverChangeToken:(id)a1 clientChangeTokenData:(id)a2 recordChangesStatus:(long long)a3 hasPendingArchivedRecords:(BOOL)a4 syncObligationZoneIDs:(id)a5 error:(id)a6 reply:(id /* block */)a7;
- (id)recordZoneChangesStatusByZoneID;
- (id)partialFailureForItemsInZone:(id)a0;
- (id)initWithRecordZoneIDs:(id)a0 optionsByRecordZoneID:(id)a1;
- (void)handleDeleteForRecordID:(id)a0 recordType:(id)a1;
- (id)recordZoneIDsWithSyncObligations;
- (id)recordZoneIDsWithPendingArchivedRecords;
- (id)init;
- (void).cxx_destruct;
- (void)setRecordZoneFetchCompletionBlockIVar:(id /* block */)a0;

@end
