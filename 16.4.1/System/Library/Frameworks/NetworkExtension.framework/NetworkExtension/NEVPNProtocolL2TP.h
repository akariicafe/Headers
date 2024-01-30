@class NSString, NSArray, NSData, NEIdentityKeychainItem, NEKeychainItem;

@interface NEVPNProtocolL2TP : NEVPNProtocolPPP {
    BOOL _machineIdentityDataImported;
    NEIdentityKeychainItem *_machineIdentity;
    NSData *_machineIdentityDataInternal;
}

@property long long machineAuthenticationMethod;
@property (copy) NSData *sharedSecretReference;
@property (copy) NEKeychainItem *sharedSecretKeychainItem;
@property (copy) NSData *machineIdentityReference;
@property (copy) NSString *localIdentifier;
@property (retain) NSArray *userPreferences;

+ (BOOL)supportsSecureCoding;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (struct __SCNetworkInterface { } *)createInterface;
- (id)copyLegacyIPSecDictionary;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { } *)a0;
- (BOOL)needToUpdateKeychain;
- (void)removeKeychainItemsInDomain:(long long)a0 keepIdentity:(BOOL)a1;
- (void)setIPSecSettingsFromLegacyDictionary:(id)a0;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService { } *)a0;
- (void)syncWithKeychainInDomain:(long long)a0 configuration:(id)a1 suffix:(id)a2;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService { } *)a0;

@end
