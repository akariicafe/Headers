@interface SOSmartcard : NSObject

+ (id)searchForCachedIdentityPersistentRef:(id)a0 tokenID:(id)a1;
+ (int)getIdentityForPersistentRef:(struct __CFData { } *)a0 identityToReturn:(struct __SecIdentity **)a1;
+ (struct __SecIdentity { } *)getLocalAuthIdentityForCert:(id)a0 withLAContext:(id)a1;
+ (BOOL)pollSmartcardForIdentityWithPersistentRef:(id)a0 tokenID:(id)a1;
+ (id)searchForCachedIdentityWithSerial:(struct __CFData { } *)a0 withIssuer:(struct __CFData { } *)a1 withTokenID:(id)a2;
+ (id)availableSmartCards;

@end
