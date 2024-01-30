@class NSArray, CKRepairZonePCSOperationInfo;
@protocol CKRepairZonePCSOperationCallbacks;

@interface CKRepairZonePCSOperation : CKDatabaseOperation <CKRepairZonePCSOperationCallbacks>

@property (readonly, nonatomic) id<CKRepairZonePCSOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKRepairZonePCSOperationInfo *operationInfo;
@property (retain, nonatomic) NSArray *zoneIDs;
@property (copy, nonatomic) id /* block */ zoneRepairedBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)performCKOperation;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:(id)a0;
- (id)initWithZoneIDsToRepair:(id)a0;
- (void)handleZonePCSRepairForID:(id)a0 pcsInfo:(id)a1 error:(id)a2;
- (BOOL)hasCKOperationCallbacksSet;

@end
