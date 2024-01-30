@interface CKPATKeyBlinding : NSObject

+ (struct __SecKey { } *)blindPublicKey:(struct __SecKey { } *)a0 withPrivateKey:(struct __SecKey { } *)a1 context:(id)a2 error:(id *)a3;
+ (id)blindSignMessage:(id)a0 blindedBy:(struct __SecKey { } *)a1 withKey:(struct __SecKey { } *)a2 context:(id)a3 error:(id *)a4;
+ (id)compressedRepresentationFromSecKey:(struct __SecKey { } *)a0;
+ (id)privateScalarFromSecKey:(struct __SecKey { } *)a0;
+ (BOOL)isValidSignature:(id)a0 forMessage:(id)a1 signedBy:(struct __SecKey { } *)a2 context:(id)a3;
+ (struct __SecKey { } *)secKeyFromCompressedRepresentation:(id)a0;
+ (struct __SecKey { } *)unblindPublicKey:(struct __SecKey { } *)a0 withPrivateKey:(struct __SecKey { } *)a1 context:(id)a2 error:(id *)a3;

@end
