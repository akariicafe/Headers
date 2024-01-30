@class NSString, NSData;

@interface _LAKeyStoreKey : NSObject <LAKeyStoreKey> {
    NSString *_identifier;
    NSData *_acl;
    NSData *_publicKeyHash;
    id _keyRef;
    id _pubKeyRef;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *acl;
@property (readonly, nonatomic) NSData *publicKeyHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildWithDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)canDecryptUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (BOOL)canEncryptUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (BOOL)canExchangeKeysUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (BOOL)canSignUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (BOOL)canVerifyUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (void)decryptData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)encryptData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 completion:(id /* block */)a2;
- (void)exchangeKeysWithPublicKey:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 secKeyParameters:(id)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)exportBytesWithCompletion:(id /* block */)a0;
- (void)signData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)verifyData:(id)a0 signature:(id)a1 secKeyAlgorithm:(struct __CFString { } *)a2 completion:(id /* block */)a3;

@end
