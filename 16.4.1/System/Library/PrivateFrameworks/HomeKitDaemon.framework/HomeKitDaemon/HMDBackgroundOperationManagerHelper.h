@class NSString;

@interface HMDBackgroundOperationManagerHelper : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)addPairingOnAllAccessoriesOfHome:(id)a0 forSharedUser:(id)a1;
+ (void)auditSharedUserEntriesInDatabase:(id)a0;
+ (void)auditSharedUserEntriesInDatabaseForAccessory:(id)a0;
+ (void)auditSharedUserEntriesInDatabaseForHome:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (BOOL)didAuditTimeExpiredOnThisAccessory:(id)a0;
+ (BOOL)didAuditTimeExpiredOnThisAirPlayAccessory:(id)a0;
+ (void)dumpUsers:(id)a0 usingTag:(id)a1;
+ (void)removeAllUsersFromAccessory:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)removeAllUsersFromAirPlayAccessory:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)removeAllUsersFromHAPAccessory:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)removePairingOnAllAccessoriesOfHome:(id)a0 forSharedUser:(id)a1;
+ (void)scheduleAddPairingForAccessory:(id)a0 forSharedUser:(id)a1;
+ (void)scheduleAddPairingForAccessory:(id)a0 sharedUser:(id)a1;
+ (void)scheduleFullAuditForAccessory:(id)a0;
+ (void)scheduleRemovePairingForAccessory:(id)a0 forSharedUser:(id)a1;
+ (void)scheduleRemovePairingForAccessory:(id)a0 sharedUser:(id)a1;
+ (void)scheduleRemovePairingForAccessory:(id)a0 usingPairingIdentity:(id)a1;


@end
