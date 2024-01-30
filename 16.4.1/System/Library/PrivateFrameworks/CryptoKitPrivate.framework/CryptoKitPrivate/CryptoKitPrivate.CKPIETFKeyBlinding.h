@interface CryptoKitPrivate.CKPIETFKeyBlinding : NSObject

+ (id)compressedRepresentationFromSecKey:(struct __SecKey { } *)a0;
+ (id)privateScalarFromSecKey:(struct __SecKey { } *)a0;
+ (struct __SecKey { } *)blindPublicKeyWithPublicKey:(struct __SecKey { } *)a0 with:(struct __SecKey { } *)a1 context:(id)a2 error:(id *)a3;
+ (id)blindSign:(id)a0 blindedBy:(struct __SecKey { } *)a1 with:(struct __SecKey { } *)a2 context:(id)a3 error:(id *)a4;
+ (BOOL)isValidWithSignature:(id)a0 for:(id)a1 with:(struct __SecKey { } *)a2 context:(id)a3;
+ (struct __SecKey { } *)secKeyFromCompressedRepresentation:(id)a0;
+ (struct __SecKey { } *)unblindPublicKey:(struct __SecKey { } *)a0 with:(struct __SecKey { } *)a1 context:(id)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;

@end
