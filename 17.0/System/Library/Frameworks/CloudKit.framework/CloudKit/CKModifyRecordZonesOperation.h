@class NSArray, CKModifyRecordZonesOperationInfo, NSMutableDictionary, NSMutableArray;
@protocol CKModifyRecordZonesOperationCallbacks;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation <CKModifyRecordZonesOperationCallbacks> {
    NSMutableArray *_savedRecordZones;
    NSMutableArray *_deletedRecordZoneIDs;
    NSMutableDictionary *_recordZonesByZoneIDs;
    NSMutableDictionary *_recordZoneErrors;
}

@property (readonly, nonatomic) id<CKModifyRecordZonesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifyRecordZonesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perRecordZoneSaveBlock_wrapper;
@property (copy, nonatomic) id /* block */ perRecordZoneDeleteBlock_wrapper;
@property (copy, nonatomic) id /* block */ modifyRecordZonesCompletionBlock_wrapper;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete;
@property (copy, nonatomic) id /* block */ perRecordZoneSaveBlock;
@property (copy, nonatomic) id /* block */ perRecordZoneDeleteBlock;
@property (copy, nonatomic) id /* block */ modifyRecordZonesCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (id)relevantZoneIDs;
- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)performCKOperation;
- (void)ckSignpostBegin;
- (id)init;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)handleSaveForRecordZoneID:(id)a0 recordZone:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)handleDeleteForRecordZoneID:(id)a0 error:(id)a1;
- (void)setModifyRecordZonesCompletionBlockIVar:(id /* block */)a0;
- (id)initWithRecordZonesToSave:(id)a0 recordZoneIDsToDelete:(id)a1;

@end
