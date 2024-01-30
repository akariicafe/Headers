@class NSDictionary;

@interface CTKClientSEP_SEKey : NSObject {
    long long _SEKeyType;
    struct aks_ref_key_s { } *_AKSRefKey;
    unsigned long long _debugID;
    unsigned int _AKSKeyType;
}

@property (class, readonly, nonatomic) BOOL hasSEP;

@property (readonly, nonatomic) struct __SecAccessControl { } *accessControl;
@property (readonly, nonatomic) id objectID;
@property (readonly, nonatomic) id keyType;
@property (readonly, nonatomic) NSDictionary *attributes;

+ (BOOL)hasSystemKey:(unsigned int)a0 ACMContext:(id)a1;
+ (id)protectionForKeyClass:(int)a0;
+ (int)keyClassForProtection:(id)a0;
+ (void)setupKeybagForTesting:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)error:(id *)a0 withAKSReturn:(int)a1 ACMContext:(id)a2 AKSOperation:(id)a3 message:(id)a4;
- (id)parametersWithContext:(id)a0;
- (id)initWithKeyType:(id)a0 accessControl:(struct __SecAccessControl { } *)a1 applePayEnabled:(BOOL)a2 ACMContext:(id)a3 error:(id *)a4;
- (BOOL)deleteWithACMContext:(id)a0 error:(id *)a1;
- (id)initWithObjectID:(id)a0 ACMContext:(id)a1 error:(id *)a2;
- (id)initWithAttributes:(id)a0 ACMContext:(id)a1 error:(id *)a2;
- (id)publicKeyWithError:(id *)a0;
- (id)signDigest:(id)a0 ACMContext:(id)a1 error:(id *)a2;
- (id)computeSharedSecret:(id)a0 ACMContext:(id)a1 error:(id *)a2;
- (id)recryptData:(id)a0 attributes:(id)a1 ACMContext:(id)a2 error:(id *)a3;
- (id)attestKey:(id)a0 nonce:(id)a1 ACMContext:(id)a2 error:(id *)a3;
- (BOOL)lifetimeControlWithType:(long long)a0 ACMContext:(id)a1 error:(id *)a2;
- (id)description;

@end
