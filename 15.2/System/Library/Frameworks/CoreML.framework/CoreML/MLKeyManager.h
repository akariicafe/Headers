@interface MLKeyManager : NSObject

+ (BOOL)isModelEncrypted:(id)a0;
+ (id)syncQueue;
+ (id)loadDecryptionKeyForModelAtURL:(id)a0 error:(id *)a1;
+ (id)extractKeyIdentifierFromModelAtURL:(id)a0 usesCodeSigningIdentityForEncryption:(BOOL *)a1 error:(id *)a2;
+ (id)createPersistentKeyBlobForKeyID:(id)a0 usesCodeSigningIdentityForEncryption:(BOOL)a1 error:(id *)a2;
+ (id)decryptSessionForModelAtURL:(id)a0 error:(id *)a1;

@end
