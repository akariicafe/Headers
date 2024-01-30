@interface NRRegistryProxy : NRXPCProxy <NRXPCRegistryDelegate>

+ (id)machServiceName;
+ (id)serverExportedInterface;
+ (id)clientRemoteObjectInterface;
+ (id)entitlements;
+ (BOOL)requireAnEntitlement;

- (void)xpcGetDeviceCollectionWithBlock:(id /* block */)a0;
- (void)xpcGetDiffSinceTokenValue:(unsigned long long)a0 getSecureProperties:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)xpcRetrieveSecureProperties:(id)a0 block:(id /* block */)a1;
- (void)xpcGetChangeHistoryWithBlock:(id /* block */)a0;
- (void)xpcSwitchIndex:(id /* block */)a0;
- (void)xpcDeviceIDAtSwitchIndex:(unsigned int)a0 withBlock:(id /* block */)a1;
- (void)xpcClientInfo:(id /* block */)a0;
- (void)xpcApplyDiff:(id)a0 withSecureProperties:(id)a1 block:(id /* block */)a2;
- (void)xpcSetMigrationConsented:(BOOL)a0 forDeviceID:(id)a1 withBlock:(id /* block */)a2;
- (BOOL)loudHasEntitlement:(id)a0;
- (void)logCaller:(SEL)a0 args:(id)a1;
- (id)registryDelegate;
- (BOOL)_hasInternalEntitlement;

@end
