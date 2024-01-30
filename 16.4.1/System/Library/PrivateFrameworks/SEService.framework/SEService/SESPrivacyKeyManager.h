@interface SESPrivacyKeyManager : NSObject

+ (id)sharedManager;

- (id)privacyKeysForGroupIdentifier:(id)a0 privacyKeyIdentifier:(id)a1 outError:(id *)a2;
- (BOOL)deletePrivacyKey:(id)a0 outError:(id *)a1;
- (id)encryptData:(id)a0 scheme:(id)a1 recipientPublicKey:(id)a2 outError:(id *)a3;
- (id)createPrivacyKeyForGroupIdentifier:(id)a0 withOptions:(id)a1 outError:(id *)a2;
- (id)decryptPayload:(id)a0 withGroupIdentifier:(id)a1 outError:(id *)a2;
- (id)createPrivacyKeysForGroupIdentifier:(id)a0 withOptions:(id)a1 outError:(id *)a2;

@end
