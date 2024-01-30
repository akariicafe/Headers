@interface MKCertificate : NSObject

@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *privateKey;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *publicKey;
@property (nonatomic) struct __SecCertificate { } *certificate;

- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (struct __SecIdentity { } *)identity;
- (id)init;
- (id)hash;
- (void)dealloc;
- (void)_appendBase64Data:(id)a0 toString:(id)a1;
- (id)pemFormattedCertificateData:(id)a0;
- (id)dataFromPEMFormattedData:(id)a0;
- (id)initWithPEM:(id)a0;
- (void)generateCertificate;
- (id)encodedCertificate;

@end
