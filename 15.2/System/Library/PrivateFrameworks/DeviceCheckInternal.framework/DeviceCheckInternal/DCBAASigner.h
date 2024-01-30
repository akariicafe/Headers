@interface DCBAASigner : NSObject

@property (class, readonly, nonatomic) DCBAASigner *sharedSigner;

- (void)signatureForData:(id)a0 completion:(id /* block */)a1;
- (id)_signatureForData:(id)a0 withReferenceKey:(struct __SecKey { } *)a1 error:(id *)a2;
- (id)_attestationWithCertificates:(id)a0 error:(id *)a1;
- (void)signaturesForData:(id)a0 completion:(id /* block */)a1;

@end
