@interface TKLocalSEPRefKey : TKLocalSEPKey {
    unsigned long long _debugID;
}

@property (readonly, nonatomic) struct aks_ref_key_s { } *AKSRefKey;

- (id)_initWithObjectID:(id)a0 authContext:(id)a1 caller:(id)a2 forceSystemSession:(BOOL)a3 error:(id *)a4;
- (id)objectID;
- (id)signDigest:(id)a0 error:(id *)a1;
- (id)recryptData:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (id)keyType;
- (void)dealloc;
- (id)computeSharedSecret:(id)a0 error:(id *)a1;
- (id)publicKeyWithError:(id *)a0;
- (id)_initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 caller:(id)a5 forceSystemSession:(BOOL)a6 error:(id *)a7;
- (long long)keySize;
- (id)description;
- (BOOL)deleteWithError:(id *)a0;

@end
