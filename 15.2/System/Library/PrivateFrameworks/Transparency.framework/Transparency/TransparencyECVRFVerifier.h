@interface TransparencyECVRFVerifier : TransparencyVRFVerifier {
    struct ccvrf { unsigned long long publickey_nbytes; unsigned long long secretkey_nbytes; unsigned long long proof_nbytes; unsigned long long hash_nbytes; unsigned long long group_nbytes; struct ccdigest_info *di; void *custom; void /* function */ *derive_public_key; void /* function */ *prove; void /* function */ *verify; void /* function */ *proof_to_hash; } vrf;
}

+ (BOOL)verifyMessage:(id)a0 output:(id)a1 proof:(id)a2 key:(id)a3 error:(id *)a4;
+ (BOOL)verifyMessage:(id)a0 salt:(id)a1 output:(id)a2 proof:(id)a3 key:(id)a4 error:(id *)a5;

- (int)vrfType;
- (id)initWithKey:(id)a0;
- (BOOL)verifyMessage:(id)a0 output:(id)a1 proof:(id)a2 error:(id *)a3;
- (BOOL)verifyMessage:(id)a0 salt:(id)a1 output:(id)a2 proof:(id)a3 error:(id *)a4;

@end
