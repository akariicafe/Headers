@class NSMutableDictionary, CKModifyRecordZonesOperationInfo, NSArray, NSMutableArray;
@protocol CKModifyRecordZonesOperationCallbacks;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation <CKModifyRecordZonesOperationCallbacks>

@property (retain, nonatomic) NSMutableArray *savedRecordZones;
@property (retain, nonatomic) NSMutableArray *deletedRecordZoneIDs;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneIDs;
@property (retain, nonatomic) NSMutableDictionary *recordZoneErrors;
@property (readonly, nonatomic) id<CKModifyRecordZonesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifyRecordZonesOperationInfo *operationInfo;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete;
@property (copy, nonatomic) id /* block */ modifyRecordZonesCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)performCKOperation;
- (id)init;
- (void).cxx_destruct;
- (id)relevantZoneIDs;
- (void)handleSaveForRecordZoneID:(id)a0 recordZone:(id)a1 error:(id)a2;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleDeleteForRecordZoneID:(id)a0 error:(id)a1;
- (id)initWithRecordZonesToSave:(id)a0 recordZoneIDsToDelete:(id)a1;
- (BOOL)hasCKOperationCallbacksSet;

@end
