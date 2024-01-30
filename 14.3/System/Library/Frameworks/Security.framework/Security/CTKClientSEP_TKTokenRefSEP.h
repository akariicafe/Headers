@class NSData, LAContext;

@interface CTKClientSEP_TKTokenRefSEP : NSObject

@property (readonly) NSData *ACMContext;
@property (readonly) LAContext *LAContext;

- (id)attestUsingKey:(id)a0 attestedKey:(id)a1 nonce:(id)a2 error:(id *)a3;
- (id)keyForObjectID:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)accessControlOfObject:(id)a0 error:(id *)a1;
- (id)keyOperation:(long long)a0 onObject:(id)a1 algorithm:(id)a2 mode:(long long)a3 in1:(id)a4 in2:(id)a5 error:(id *)a6;
- (id)publicKeyOfObject:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)deleteObject:(id)a0 error:(id *)a1;
- (id)initWithTokenID:(id)a0 LAContext:(id)a1 testMode:(id)a2;
- (BOOL)lifetimeControlKey:(id)a0 lifetimeControlType:(long long)a1 error:(id *)a2;
- (id)createOrUpdateObject:(id)a0 attributes:(id)a1 error:(id *)a2;

@end
