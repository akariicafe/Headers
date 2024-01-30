@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HAPSystemKeychainStore : HMFObject <HAPKeyStore, HMFDumpState>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *activeControllerIdentifier;
@property (readonly, nonatomic) NSString *activeControllerPairingIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)systemStore;

- (BOOL)updateActiveControllerPairingIdentifier:(id)a0;
- (int)_createControllerPublicKey:(id *)a0 secretKey:(id *)a1 keyPair:(id *)a2 username:(id *)a3;
- (BOOL)saveLocalPairingIdentity:(id)a0 syncable:(BOOL)a1 error:(id *)a2;
- (int)_addKeychainItem:(id)a0 logDuplicateItemError:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)removeAllAccessoryKeys:(id *)a0;
- (id)_getControllerKeychainItemError:(int *)a0;
- (int)_getMetadataSecretKey:(id *)a0;
- (int)_deletePeripheralIdentifierForAccessoryIdentifier:(id)a0;
- (BOOL)deletePeripheralIdentifierForAccessoryIdentifier:(id)a0 error:(id *)a1;
- (BOOL)getAllAvailableControllerPublicKeys:(id *)a0 secretKeys:(id *)a1 userNames:(id *)a2 error:(id *)a3;
- (id)_getLocalPairingIdentityAllowingCreation:(BOOL)a0 error:(id *)a1;
- (int)_removeControllerKeyPairForIdentifier:(id)a0 leaveTombstone:(BOOL)a1;
- (id)_getKeychainItemsForAccessGroup:(id)a0 type:(id)a1 account:(id)a2 shouldReturnData:(BOOL)a3 error:(int *)a4;
- (void)_updateKeychainItemToInvisible:(id)a0;
- (int)_createMetadataSecretKey:(id *)a0;
- (BOOL)deleteAllPeripheralIdentifiers:(id *)a0;
- (id)_getControllerKeychainItemForKeyType:(id)a0 error:(int *)a1;
- (int)_deleteAllPeripheralIdentifiers;
- (BOOL)savePeripheralIdentifier:(id)a0 forAccessoryIdentifier:(id)a1 protocolVersion:(unsigned long long)a2 resumeSessionID:(unsigned long long)a3 error:(id *)a4;
- (int)_getPublicKey:(id *)a0 registeredWithHomeKit:(BOOL *)a1 forAccessoryName:(id)a2;
- (int)_saveKeyPair:(id)a0 username:(id)a1 syncable:(BOOL)a2 keyType:(id)a3;
- (int)_updateCurrentiCloudIdentifier:(id)a0 controllerPairingIdentifier:(id)a1;
- (BOOL)getCurrentiCloudIdentifier:(id *)a0 controllerPairingIdentifier:(id *)a1 error:(id *)a2;
- (id)dumpState;
- (id)auditKeysOfManagedAccessories:(id)a0;
- (BOOL)updatePeripheralIdentifier:(id)a0 forAccessoryIdentifier:(id)a1 protocolVersion:(unsigned long long)a2 previousVersion:(unsigned long long *)a3 resumeSessionID:(unsigned long long)a4 error:(id *)a5;
- (int)_savePublicKey:(id)a0 forAccessoryName:(id)a1;
- (BOOL)savePublicKey:(id)a0 forAccessoryName:(id)a1 error:(id *)a2;
- (BOOL)getControllerPublicKey:(id *)a0 secretKey:(id *)a1 keyPair:(id *)a2 username:(id *)a3 allowCreation:(BOOL)a4 error:(id *)a5;
- (BOOL)getMetadataSecretKey:(id *)a0 error:(id *)a1;
- (BOOL)removeControllerKeyPairWithError:(id *)a0;
- (id)_auditKeychainItems:(id)a0 managedAccessories:(id)a1;
- (BOOL)registerAccessoryWithHomeKit:(id)a0 error:(id *)a1;
- (BOOL)deserializeKeyPair:(id)a0 publicKey:(id *)a1 secretKey:(id *)a2 error:(id *)a3;
- (BOOL)getControllerPublicKey:(id *)a0 secretKey:(id *)a1 username:(id *)a2 allowCreation:(BOOL)a3 error:(id *)a4;
- (id)getLocalPairingIdentity:(id *)a0;
- (BOOL)saveKeyPair:(id)a0 username:(id)a1 syncable:(BOOL)a2 error:(id *)a3;
- (void)ensureControllerKeyExistsForAllViews;
- (BOOL)updateCurrentiCloudIdentifier:(id)a0 controllerPairingIdentifier:(id)a1 error:(id *)a2;
- (int)_getControllerPublicKey:(id *)a0 secretKey:(id *)a1 keyPair:(id *)a2 username:(id *)a3;
- (BOOL)removeControllerKeyPairLeaveTombstone:(BOOL)a0 error:(id *)a1;
- (int)_removeControllerKeyPairForKeyType:(id)a0 identifier:(id)a1 leaveTombstone:(BOOL)a2;
- (int)_removeKeychainItem:(id)a0 leaveTombstone:(BOOL)a1;
- (id)readPeripheralIdentifierForAccessoryIdentifier:(id)a0 protocolVersion:(unsigned long long *)a1 resumeSessionID:(unsigned long long *)a2 error:(id *)a3;
- (id)getOrCreateLocalPairingIdentity:(id *)a0;
- (BOOL)removeAccessoryKeyForName:(id)a0 error:(id *)a1;
- (int)_getAllAvailableControllerPublicKeys:(id *)a0 secretKeys:(id *)a1 userNames:(id *)a2;
- (int)_removeAccessoryKeyForName:(id)a0;
- (int)_savePeripheralIdentifier:(id)a0 forAccessoryIdentifier:(id)a1 protocolVersion:(unsigned long long)a2 resumeSessionID:(unsigned long long)a3;
- (id)getPeripherialIdentifiersAndAccessoryNames;
- (BOOL)removeControllerKeyPairForIdentifier:(id)a0 leaveTombstone:(BOOL)a1 error:(id *)a2;
- (int)_getPeripheralIdentifier:(id *)a0 forAccessoryIdentifier:(id)a1 protocolVersion:(unsigned long long *)a2 resumeSessionID:(unsigned long long *)a3;
- (id)readPublicKeyForAccessoryName:(id)a0 registeredWithHomeKit:(BOOL *)a1 error:(id *)a2;

@end
