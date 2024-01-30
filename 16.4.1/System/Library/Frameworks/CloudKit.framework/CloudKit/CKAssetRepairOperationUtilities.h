@interface CKAssetRepairOperationUtilities : NSObject

+ (void)clearRepairZoneForDatabase:(id)a0 withRepairContainerOverrides:(id)a1 completionHandler:(id /* block */)a2;
+ (id)createRepairContainerFromContainer:(id)a0;
+ (id)createRepairContainerFromContainer:(id)a0 withOverrides:(id)a1;
+ (id)createRepairOperationGroupWithName:(id)a0;
+ (BOOL)errorIsRetriableInNearFuture:(id)a0;
+ (BOOL)errorShouldTriggerNetworkReachabilityEvent:(id)a0;
+ (BOOL)repairErrorShouldBeMarkedAsBroken:(id)a0;
+ (id)repairRecordFromRecord:(id)a0 field:(id)a1 listIndex:(long long)a2 repairZoneID:(id)a3;
+ (id)uploadRequestMetadataFromRepairRecord:(id)a0;

@end
