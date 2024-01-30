@interface MCCrypto : NSObject

+ (struct __SecCertificate { } *)copyCertificateRefFromPEMData:(id)a0;
+ (void)clearStoredActivationLockHash;
+ (BOOL)isValidPKCS12Data:(id)a0;
+ (id)_decryptionFailedErrorWithUnderlyingError:(id)a0;
+ (id)storedActivationLockBypassCodeHash;
+ (id)createAndStoreNewActivationLockBypassCodeAndHash;
+ (struct __SecCertificate { } *)copyCertificateRefFromPKCS1Data:(id)a0;
+ (void)createNewActivationLockBypassCodeOutCode:(char *)a0 outRawBytes:(char *)a1 outHash:(char *)a2;
+ (id)storeActivationLockBypassCode:(id)a0 hash:(id)a1;
+ (id)objectFromEncryptedData:(id)a0 outCertificate:(struct __SecCertificate **)a1 outError:(id *)a2;
+ (void)clearStoredActivationLockBypassCode;
+ (id)createAndStoreNewActivationLockBypassCodeAndHashIfNeeded;
+ (id)storedActivationLockBypassCodeWithOutError:(id *)a0;

@end
