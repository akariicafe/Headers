@class TransparencyTrustedKeyStore;

@interface TransparencyConsistencyProofVerifier : NSObject

@property (retain) TransparencyTrustedKeyStore *trustedKeyStore;

- (void).cxx_destruct;
- (id)initWithTrustedKeyStore:(id)a0;
- (unsigned long long)verifyConsistencyProof:(id)a0 startLogHead:(id)a1 endLogHead:(id)a2 error:(id *)a3;
- (BOOL)verifyConsistencyProof:(id)a0 startHash:(id)a1 startSize:(unsigned long long)a2 endHash:(id)a3 endSize:(unsigned long long)a4 error:(id *)a5;

@end
