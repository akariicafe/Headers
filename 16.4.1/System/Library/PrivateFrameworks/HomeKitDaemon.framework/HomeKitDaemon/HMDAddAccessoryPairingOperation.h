@class NSString;

@interface HMDAddAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)predicate;

- (id)logIdentifier;
- (BOOL)addPairingToAirPlayAccessory:(id)a0 newPairingIdentity:(id)a1 isOwner:(BOOL)a2 error:(id *)a3;
- (BOOL)addPairingToHAPAccessory:(id)a0 newPairingIdentity:(id)a1 permissions:(unsigned long long)a2 error:(id *)a3;
- (void)associateNewControllerKeyWithAccessory:(id)a0 controllerKeyIdentifierToAssociate:(id)a1 permissions:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (id)initWithAccessory:(id)a0 newPairingIdentity:(id)a1 asOwner:(BOOL)a2 asAdmin:(BOOL)a3 shouldUpdateKeyChainEntry:(BOOL)a4;
- (id)initWithAccessory:(id)a0 newPairingIdentity:(id)a1 asOwner:(BOOL)a2 asAdmin:(BOOL)a3 shouldUpdateKeyChainEntry:(BOOL)a4 userData:(id)a5;
- (id)initWithAccessoryUUID:(id)a0 accessoryIdentifier:(id)a1 newPairingIdentity:(id)a2 homeUUIDWhereAccessoryWasPaired:(id)a3 asOwner:(BOOL)a4 asAdmin:(BOOL)a5 shouldUpdateKeyChainEntry:(BOOL)a6 userData:(id)a7;
- (BOOL)mainWithError:(id *)a0;

@end
