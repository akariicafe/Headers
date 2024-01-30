@class NSString;

@interface HDEncryptedArchiveKeyPair : NSObject <HDEncryptedArchiveKey> {
    struct __SecKey { } *_fullKey;
    struct __SecKey { } *_publicKey;
}

@property (readonly, nonatomic) BOOL symmetric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchFromKeychainForLabel:(id)a0 includePrivate:(BOOL)a1 error:(id *)a2;
+ (id)randomKeyPairWithError:(id *)a0;

- (void)dealloc;
- (id)initWithSecKey:(struct __SecKey { } *)a0;
- (BOOL)_deleteFromKeychainWithLabel:(id)a0 public:(BOOL)a1 error:(id *)a2;
- (BOOL)addToKeychainWithLabel:(id)a0 error:(id *)a1;
- (BOOL)deleteFromKeychainWithLabel:(id)a0 error:(id *)a1;
- (id)initWithPublicSecKey:(struct __SecKey { } *)a0;
- (id)keyDataForDecryptionWithError:(id *)a0;
- (id)keyDataForEncryptionWithError:(id *)a0;

@end
