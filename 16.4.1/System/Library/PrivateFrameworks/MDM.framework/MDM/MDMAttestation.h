@class NSArray, NSData, NSDate;

@interface MDMAttestation : NSObject {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *_key;
    NSArray *_certs;
    NSData *_nonce;
    NSDate *_issued;
}

+ (id)sharedInstance;

- (id)initPrivate;
- (void).cxx_destruct;
- (void)reset;
- (id)_expirationForIssued:(id)a0;
- (id)_requestAttestationCertChainAnonymous:(BOOL)a0 nonce:(id)a1 outError:(id *)a2;
- (BOOL)_retrieveCerts:(id *)a0 nonce:(id *)a1 issued:(id *)a2;
- (BOOL)_storeCerts:(id)a0 nonce:(id)a1 issued:(id)a2 outError:(id *)a3;
- (id)attestationCertificateChainAnonymous:(BOOL)a0 nonce:(id)a1 outError:(id *)a2;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)attestationKey:(BOOL)a0 outError:(id *)a1;

@end
