@class NSData;

@interface RSABSSATokenBlinder : NSObject {
    const struct ccrsabssa_ciphersuite { } *_ciphersuite;
    unsigned long long _ciphersuiteModulusByteCount;
    struct ccrsa_pub_ctx { unsigned long long pb_n; unsigned long long pb_bitlen; struct cczp_funcs *pb_funcs; unsigned long long pb_ccn[0]; } _publicKey[514];
}

@property (readonly, retain, nonatomic) NSData *keyId;

+ (id)keyIDFromSPKI:(id)a0;

- (struct ccrsa_pub_ctx { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *)publicKey;
- (void).cxx_destruct;
- (id)initWithPublicKey:(id)a0 error:(id *)a1;
- (id)tokenWaitingActivationWithContent:(id)a0 error:(id *)a1;
- (BOOL)setParamsForSize:(unsigned long long)a0 params:(id)a1 error:(id *)a2;
- (BOOL)verifyFullyParsedASN1:(const char *)a0 end:(const char *)a1 error:(id *)a2;

@end
