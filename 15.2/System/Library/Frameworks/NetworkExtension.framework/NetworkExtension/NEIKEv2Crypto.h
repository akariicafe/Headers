@interface NEIKEv2Crypto : NSObject

+ (BOOL)decryptGCMWithKey:(const char *)a0 keyLen:(int)a1 iv:(const char *)a2 ivLen:(int)a3 aad:(const char *)a4 aadLen:(int)a5 encryptedText:(const char *)a6 len:(int)a7 output:(char *)a8 outputLen:(int)a9;
+ (BOOL)decryptChaChaPolyWithKey:(const char *)a0 keyLen:(int)a1 iv:(const char *)a2 ivLen:(int)a3 aad:(const char *)a4 aadLen:(int)a5 encryptedText:(const char *)a6 len:(int)a7 output:(char *)a8 outputLen:(int)a9;
+ (id)createHMACFromData:(id)a0 key:(id)a1 integrityAlgorithm:(unsigned long long)a2;
+ (id)createPRFPlusFromData:(id)a0 key:(id)a1 prfAlgorithm:(unsigned long long)a2 outputLength:(unsigned int)a3;
+ (id)copyAuthenticationProtocolForAuthMethod:(unsigned long long)a0 authData:(id)a1;
+ (id)copyDHKeys:(unsigned long long)a0;
+ (struct __SecIdentity { } *)copySecIdentity:(id)a0;
+ (id)copySignHashDataForSet:(id)a0 authentication:(id)a1;
+ (id)createIVForEncryptionAlgorithm:(id)a0 encryptContext:(id)a1;
+ (id)createNATDetectionHashForInitiatorSPI:(id)a0 responderSPI:(id)a1 address:(id)a2;
+ (struct __SecCertificate { } *)copyCertificateFromPersistentData:(id)a0;
+ (id)createCertificateAuthorityPublicKeyHash:(struct __SecCertificate { } *)a0;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyTrustedKeyForCertificate:(id)a0 remoteCAArray:(id)a1 policyRef:(void *)a2 enableRevocationCheck:(BOOL)a3 strictRevocationCheck:(BOOL)a4;
+ (struct __SecPolicy { } *)createPolicyWithHostname:(id)a0;
+ (id)copyPersistentIdentityDataForCommonName:(id)a0;
+ (id)copyDataFromPersistentReference:(id)a0;
+ (id)copyPersistentCertificateDataForCommonName:(id)a0 matchingCertificateHash:(id)a1;
+ (BOOL)verifySignature:(id)a0 octets:(id)a1 hashAlgorithm:(unsigned long long)a2 publicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a3 padding:(unsigned int)a4;
+ (id)createEncryptedData:(id)a0 algorithm:(id)a1 key:(id)a2 iv:(id)a3 encryptionContext:(id)a4 aad:(id)a5 padDataToKeyLength:(BOOL)a6;
+ (id)createDecryptedData:(id)a0 algorithm:(id)a1 key:(id)a2 iv:(id)a3 aad:(id)a4 padDataToKeyLength:(BOOL)a5;
+ (id)createHMACFromData:(id)a0 key:(id)a1 prfAlgorithm:(unsigned long long)a2;
+ (id)createHashFromData:(id)a0 algorithm:(unsigned long long)a1;
+ (unsigned long long)signHashTypeForAuthentication:(id)a0;
+ (id)createSignHashProtocolForAuth:(id)a0;
+ (id)copySignHashDataForSet:(id)a0;
+ (id)createRandomWithSize:(unsigned int)a0;
+ (id)createHashFromData:(id)a0;
+ (id)createBase16EncodedDataForString:(const char *)a0;
+ (id)prototypeDHKeysForGroup:(unsigned long long)a0;
+ (id)copyAllCertIdentities;
+ (id)copyPersistentDataForIdentity:(struct __SecIdentity { } *)a0;
+ (id)copyAllCertificates;
+ (id)copyPersistentDataForCertificate:(struct __SecCertificate { } *)a0;
+ (id)createHashFromData:(id)a0 hashAlgorithm:(unsigned long long)a1;
+ (BOOL)verifySignature:(id)a0 octets:(id)a1 hashAlgorithm:(unsigned long long)a2 publicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a3 padding:(unsigned int)a4 sha2:(BOOL)a5;
+ (BOOL)encryptGCMWithContext:(id)a0 aad:(const char *)a1 aadLen:(int)a2 plaintext:(const char *)a3 len:(int)a4 output:(char *)a5 outputLen:(int)a6;
+ (BOOL)encryptChaChaPolyWithContext:(id)a0 key:(id)a1 iv:(id)a2 aad:(const char *)a3 aadLen:(int)a4 plaintext:(const char *)a5 len:(int)a6 output:(char *)a7 outputLen:(int)a8;

@end
