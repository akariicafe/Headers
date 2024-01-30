@class NSData;

@interface TKRemoteSEPKey : TKSEPKey {
    id _keyType;
    long long _keySize;
    BOOL _systemKey;
    NSData *_publicKey;
    id _accessControl;
    BOOL _forceSystemSession;
}

@property (readonly, nonatomic) id keyID;

- (struct __SecAccessControl { } *)accessControl;
- (id)objectID;
- (id)_initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 forceSystemSession:(BOOL)a5 error:(id *)a6;
- (BOOL)processServerAtributes:(id)a0 error:(id *)a1;
- (BOOL)systemKey;
- (id)signDigest:(id)a0 error:(id *)a1;
- (id)recryptData:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 forceSystemSession:(BOOL)a2 error:(id *)a3;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (BOOL)lifetimeControlWithType:(long long)a0 error:(id *)a1;
- (id)keyType;
- (id)computeSharedSecret:(id)a0 error:(id *)a1;
- (id)withError:(id *)a0 invoke:(id /* block */)a1;
- (id)publicKeyWithError:(id *)a0;
- (long long)keySize;
- (void).cxx_destruct;
- (BOOL)deleteWithError:(id *)a0;

@end
