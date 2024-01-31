@class NSArray, CKRepairZonePCSOperationInfo;
@protocol CKRepairZonePCSOperationCallbacks;

@interface CKRepairZonePCSOperation : CKDatabaseOperation <CKRepairZonePCSOperationCallbacks>

@property (readonly, nonatomic) id<CKRepairZonePCSOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKRepairZonePCSOperationInfo *operationInfo;
@property (retain, nonatomic) NSArray *zoneIDs;
@property (copy, nonatomic) id /* block */ zoneRepairedBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)ckSignpostBegin;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void).cxx_destruct;
- (void)handleZonePCSRepairForID:(id)a0 pcsInfo:(id)a1 error:(id)a2;
- (id)initWithZoneIDsToRepair:(id)a0;

@end
