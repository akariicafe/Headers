@interface TKLocalSEPRefKey : TKLocalSEPKey {
    unsigned long long _debugID;
}

@property (readonly, nonatomic) struct aks_ref_key_s { } *AKSRefKey;

- (id)keyType;
- (id)recryptData:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 error:(id *)a2;
- (id)_initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 error:(id *)a5;
- (long long)keySize;
- (id)computeSharedSecret:(id)a0 error:(id *)a1;
- (id)signDigest:(id)a0 error:(id *)a1;
- (BOOL)deleteWithError:(id *)a0;
- (id)publicKeyWithError:(id *)a0;
- (id)objectID;
- (id)description;
- (void)dealloc;

@end
