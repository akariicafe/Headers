@class NSObject;
@protocol OS_dispatch_queue;

@interface AKAttestationSigner : NSObject {
    NSObject<OS_dispatch_queue> *_attestationQueue;
}

@property (class, readonly, nonatomic) AKAttestationSigner *sharedSigner;

- (void).cxx_destruct;
- (id)init;
- (id)_signatureForData:(id)a0 withReferenceKey:(struct __SecKey { } *)a1 error:(id *)a2;
- (id)_attestationWithCertificates:(id)a0 error:(id *)a1;
- (void)signatureForData:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)signaturesForData:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
