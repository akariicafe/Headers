@interface SOSmartcard : NSObject

+ (id)searchForCachedIdentityWithSerial:(struct __CFData { } *)a0 withIssuer:(struct __CFData { } *)a1 withTokenID:(id)a2;
+ (struct __SecIdentity { } *)getLocalAuthIdentityForCert:(id)a0 withLAContext:(id)a1;
+ (int)getIdentityForPersistentRef:(struct __CFData { } *)a0 identityToReturn:(struct __SecIdentity **)a1;
+ (BOOL)pollSmartcardForIdentityWithSerialNumber:(id)a0 withIssuer:(id)a1 withTokenID:(id)a2;

@end
