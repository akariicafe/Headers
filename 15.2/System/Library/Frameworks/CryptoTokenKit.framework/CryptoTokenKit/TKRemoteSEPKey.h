@class NSData;

@interface TKRemoteSEPKey : TKSEPKey {
    id _keyType;
    long long _keySize;
    BOOL _systemKey;
    NSData *_publicKey;
    id _accessControl;
}

@property (readonly, nonatomic) id keyID;

- (BOOL)lifetimeControlWithType:(long long)a0 error:(id *)a1;
- (id)keyType;
- (id)recryptData:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (id)withError:(id *)a0 invoke:(id /* block */)a1;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 error:(id *)a2;
- (struct __SecAccessControl { } *)accessControl;
- (id)_initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 error:(id *)a5;
- (long long)keySize;
- (id)computeSharedSecret:(id)a0 error:(id *)a1;
- (BOOL)systemKey;
- (id)signDigest:(id)a0 error:(id *)a1;
- (BOOL)deleteWithError:(id *)a0;
- (id)publicKeyWithError:(id *)a0;
- (id)objectID;
- (BOOL)processServerAtributes:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
