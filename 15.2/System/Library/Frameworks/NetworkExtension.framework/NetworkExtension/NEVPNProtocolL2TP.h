@class NSString, NEIdentityKeychainItem, NSData, NEKeychainItem;

@interface NEVPNProtocolL2TP : NEVPNProtocolPPP

@property (retain) NEIdentityKeychainItem *machineIdentity;
@property (copy) NSData *machineIdentityDataInternal;
@property BOOL machineIdentityDataImported;
@property long long machineAuthenticationMethod;
@property (copy) NSData *sharedSecretReference;
@property (copy) NEKeychainItem *sharedSecretKeychainItem;
@property (copy) NSData *machineIdentityReference;
@property (copy) NSString *localIdentifier;

+ (BOOL)supportsSecureCoding;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (struct __SCNetworkInterface { } *)createInterface;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService { } *)a0;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService { } *)a0;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)needToUpdateKeychain;
- (id)copyLegacyIPSecDictionary;
- (void)setIPSecSettingsFromLegacyDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)syncWithKeychainInDomain:(long long)a0 configuration:(id)a1 suffix:(id)a2;
- (void)removeKeychainItemsInDomain:(long long)a0 keepIdentity:(BOOL)a1;

@end
