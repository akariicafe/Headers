@class POMutableJWTBody, POMutableJWTHeader;

@interface POMutableJWT : POJWT

@property (retain) POMutableJWTHeader *header;
@property (retain) POMutableJWTBody *body;

- (id)description;
- (void).cxx_destruct;
- (void)setBodyData:(id)a0;
- (id)encodeAndEncryptUsingPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (id)encodeAndEncryptUsingPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 partyVInfo:(id)a1;
- (id)encodeAndSignUsingAlgorithm:(id)a0 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 certificate:(struct __SecCertificate { } *)a2;
- (BOOL)isJWE;

@end
