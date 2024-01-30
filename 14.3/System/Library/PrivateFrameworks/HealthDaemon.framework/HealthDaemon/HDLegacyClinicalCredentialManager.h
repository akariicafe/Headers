@class NSData, NSObject;
@protocol OS_dispatch_queue;

@interface HDLegacyClinicalCredentialManager : NSObject {
    NSData *_cachedCredentialKey;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *credentialKeyQueue;
@property (copy, nonatomic) NSData *cachedCredentialKey;

- (id)init;
- (void).cxx_destruct;
- (id)decryptTokenData:(id)a0 error:(out id *)a1;
- (BOOL)deleteCredentialKeyFromKeychainWithError:(id *)a0;
- (id)_encryptToken:(id)a0 error:(out id *)a1;
- (id)_tokenDataFromToken:(id)a0 error:(out id *)a1;
- (id)_generateInitializationVectorWithError:(out id *)a0;
- (id)_encryptTokenData:(id)a0 initializationVector:(id)a1 operation:(unsigned int)a2 error:(out id *)a3;
- (id)_encryptedTokenDataWithInitializationVector:(id)a0 payload:(id)a1;
- (id)_decryptTokenData:(id)a0 error:(out id *)a1;
- (id)_initializationVectorFromEncryptedTokenData:(id)a0 error:(out id *)a1;
- (id)_payloadFromEncryptedTokenData:(id)a0 error:(out id *)a1;
- (id)_tokenFromTokenData:(id)a0 error:(out id *)a1;
- (id)_credentialKeyWithError:(out id *)a0;
- (BOOL)_shouldProceedWithEncryptionAfterStatus:(int)a0 error:(out id *)a1;
- (BOOL)_assignCredentialManagerError:(out id *)a0 code:(long long)a1 format:(id)a2;
- (BOOL)_encryptedTokenDataHasInitializationVector:(id)a0 error:(out id *)a1;
- (id)_tokenByStrippingPaddingFromToken:(id)a0;
- (BOOL)_assignCredentialManagerError:(out id *)a0 code:(long long)a1 description:(id)a2;
- (BOOL)_validateToken:(id)a0 error:(out id *)a1;
- (id)_credentialKeyFingerprintWithError:(out id *)a0;
- (id)_retrieveCredentialKeyFromKeychainWithError:(out id *)a0;
- (id)_credentialKeyBaseAttributes;
- (id)_credentialKeyQuery;
- (id)_attributesForCredentialKey:(id)a0;
- (BOOL)_storeCredentialKeyInKeychain:(id)a0 error:(out id *)a1;
- (id)_generateRandomBytesOfLength:(long long)a0 error:(out id *)a1;
- (id)encryptToken:(id)a0 error:(out id *)a1;
- (id)credentialKeyFingerprintWithError:(out id *)a0;
- (id)unitTesting_retrieveCredentialKeyFromKeychainWithError:(id *)a0;
- (BOOL)unitTesting_storeCredentialKeyInKeychain:(id)a0 error:(id *)a1;
- (id)_generateCredentialKeyWithError:(out id *)a0;
- (BOOL)_error:(id)a0 isCredentialManagerErrorWithCode:(long long)a1;

@end
