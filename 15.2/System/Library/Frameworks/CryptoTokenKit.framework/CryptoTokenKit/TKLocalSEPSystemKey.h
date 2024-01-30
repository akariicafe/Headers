@interface TKLocalSEPSystemKey : TKLocalSEPKey {
    unsigned int _AKSSystemKeyType;
    unsigned int _AKSSystemKeyGeneration;
}

+ (void)initSystemKeyIDs;
+ (BOOL)hasSystemKey:(unsigned int)a0 ACMHandle:(id)a1;

- (BOOL)lifetimeControlWithType:(long long)a0 error:(id *)a1;
- (id)keyType;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (long long)keySize;
- (BOOL)systemKey;
- (id)signDigest:(id)a0 error:(id *)a1;
- (id)publicKeyWithError:(id *)a0;
- (id)objectID;
- (id)description;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 isIDUnknown:(BOOL *)a2 error:(id *)a3;

@end
