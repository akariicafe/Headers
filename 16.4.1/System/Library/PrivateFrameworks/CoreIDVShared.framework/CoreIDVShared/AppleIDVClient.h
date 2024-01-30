@interface AppleIDVClient : NSObject

+ (unsigned int)appleIDVAuthorizePresentment:(id)a0 withLAContextData:(id)a1 onSESlot:(long long)a2 andPublicKey:(id)a3;
+ (unsigned int)appleIDVGenerateNonceOnWatch:(id *)a0;
+ (unsigned int)appleIDVGeneratePrearmTrustKeyForWatchAndCopyPrivateKey:(id)a0 encryptedPrivateKey:(id *)a1 attestation:(id *)a2 publicKey:(id *)a3 keyBlob:(id *)a4;
+ (unsigned int)appleIDVGetStatus:(long long *)a0 andVersion:(id *)a1;
+ (unsigned int)appleIDVPersistACLBlob:(id)a0 intoBlob:(id *)a1 returnBioUUIDs:(id *)a2 andRequireDoublePress:(unsigned char)a3;
+ (unsigned int)appleIDVPersistModifiedSESlot:(long long)a0 withReferenceBlob:(id)a1 withLAContextData:(id)a2 intoBlob:(id *)a3;
+ (unsigned int)appleIDVRecoverPersistedACLBlob:(id)a0 intoBlob:(id *)a1;
+ (unsigned int)appleIDVEstablishPrearmTrustWithCertificate:(id)a0 protectedPublicKey:(id *)a1;
+ (unsigned int)prepareUnboundACLForBioBinding:(id *)a0;
+ (unsigned int)appleIDVAuthorizePresentment:(id)a0 withLAContextData:(id)a1 onSESlot:(long long)a2 andPayloadDigest:(id)a3;
+ (unsigned int)appleIDVCredentialAuthenticationTokenStatus;
+ (unsigned int)appleIDVGeneratePhoneTokenWithNonce:(id)a0 withReferenceACLBlob:(id)a1 keyBlob:(id)a2 phoneToken:(id *)a3;
+ (unsigned int)appleIDVGetStatus:(long long *)a0 andSIDVVersion:(id *)a1 andAppleIDVVersion:(id *)a2;
+ (unsigned int)appleIDVPersistACLBlob:(id)a0 intoBlob:(id *)a1 returnBioUUIDs:(id *)a2;
+ (unsigned int)appleIDVPersistModifiedACLBlob:(id)a0 withReferenceACLBlob:(id)a1 withLAContextData:(id)a2 intoBlob:(id *)a3 returnBioUUIDs:(id *)a4;
+ (unsigned int)appleIDVPrearmCredentialWithAuthorizationToken:(id)a0 protectedPublicKey:(id)a1;
+ (unsigned int)appleIDVRevokeCredentialAuthorizationToken;
+ (unsigned int)getUUIDsFromACL:(id)a0 intoArray:(id *)a1;
+ (unsigned int)prepareACL:(id *)a0 aclType:(unsigned int)a1 forAclUsage:(unsigned int)a2 forBioUUID:(id)a3;
+ (unsigned int)prepareACLForPhoneDecryption:(id *)a0 withSubType:(unsigned int)a1 forBioUUID:(id)a2;
+ (unsigned int)prepareACLForWatchDecryption:(id *)a0 withSubType:(unsigned int)a1 forAclUsage:(unsigned int)a2;
+ (id)prepareUnboundACLForBinding:(struct __SecAccessControl { } *)a0 withConstraints:(id)a1;
+ (unsigned int)prepareUnboundACLForPasscodeBinding:(id *)a0;
+ (unsigned int)prepareUnboundACLForWatch:(id *)a0 withAccessibilityEnabled:(BOOL)a1;
+ (unsigned int)requireDoublePressOnACL:(id)a0 intoACL:(id *)a1;

@end
