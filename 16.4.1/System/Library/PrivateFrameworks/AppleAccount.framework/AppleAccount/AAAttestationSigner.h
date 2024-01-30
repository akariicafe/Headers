@class NSObject;
@protocol OS_dispatch_queue;

@interface AAAttestationSigner : NSObject {
    NSObject<OS_dispatch_queue> *_attestationQueue;
}

@property (class, readonly) AAAttestationSigner *sharedSigner;

- (id)init;
- (void).cxx_destruct;
- (id)_attestationWithCertificates:(id)a0 error:(id *)a1;
- (id)_signatureForData:(id)a0 withReferenceKey:(struct __SecKey { } *)a1 error:(id *)a2;
- (void)signatureForData:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)signaturesForDatas:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
