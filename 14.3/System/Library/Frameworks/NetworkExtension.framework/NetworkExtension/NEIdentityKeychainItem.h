@interface NEIdentityKeychainItem : NEKeychainItem

+ (id)copyPersistentReferenceForIdentity:(struct __SecIdentity { } *)a0;
+ (id)copyPropertiesForIdentity:(struct __SecIdentity { } *)a0 persistentReference:(id)a1;
+ (id)importPKCS12Data:(id)a0 passphrase:(id)a1;
+ (id)copyIdentities:(id)a0 fromDomain:(long long)a1;

- (void)sync;
- (id)copyQueryWithReturnTypes:(id)a0;
- (id)copyPassword;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPassword:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (void)syncUsingConfiguration:(id)a0 accountName:(id)a1 passwordType:(long long)a2 identifierSuffix:(id)a3;

@end
