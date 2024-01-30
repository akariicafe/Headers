@class NSData, NSObject;
@protocol OS_dispatch_queue;

@interface HDLegacyClinicalCredentialManager : NSObject {
    NSData *_cachedCredentialKey;
    NSObject<OS_dispatch_queue> *_credentialKeyQueue;
}

@property (copy, nonatomic) NSData *cachedCredentialKey;

- (void).cxx_destruct;
- (id)init;
- (id)decryptTokenData:(id)a0 error:(out id *)a1;
- (BOOL)deleteCredentialKeyFromKeychainWithError:(id *)a0;
- (id)_tokenDataFromToken:(id)a0 error:(out id *)a1;
- (id)_encryptTokenData:(id)a0 initializationVector:(id)a1 operation:(unsigned int)a2 error:(out id *)a3;
- (id)_initializationVectorFromEncryptedTokenData:(id)a0 error:(out id *)a1;
- (id)_payloadFromEncryptedTokenData:(id)a0 error:(out id *)a1;
- (id)_retrieveCredentialKeyFromKeychainWithError:(out id *)a0;
- (BOOL)_storeCredentialKeyInKeychain:(id)a0 error:(out id *)a1;
- (id)encryptToken:(id)a0 error:(out id *)a1;
- (id)credentialKeyFingerprintWithError:(out id *)a0;
- (id)unitTesting_retrieveCredentialKeyFromKeychainWithError:(id *)a0;
- (BOOL)unitTesting_storeCredentialKeyInKeychain:(id)a0 error:(id *)a1;
- (id)_generateCredentialKeyWithError:(out id *)a0;

@end
