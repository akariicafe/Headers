@interface SFTrustPolicy : NSObject <NSCopying> {
    id _trustPolicyInternal;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)evaluateCertificateChain:(id)a0 error:(id *)a1;

@end
