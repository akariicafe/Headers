@class AMSBiometricsSignatureRequest;

@interface AMSBiometricsSignatureTask : AMSTask

@property (readonly, nonatomic) AMSBiometricsSignatureRequest *request;

+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPrivateKeyWithStyle:(unsigned long long)a0 context:(id)a1 account:(id)a2 options:(id)a3 error:(id *)a4;
+ (id)fetchDataToSignWithPublicKeyData:(id)a0 challenge:(id)a1 error:(id *)a2;
+ (id)fetchPublicKeyDataFromPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 error:(id *)a1;
+ (id)signDataWithPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 dataToSign:(id)a1 error:(id *)a2;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)_performCardEnrollmentCheck:(id *)a0;
- (id)_performSignatureInProcess;
- (id)_performSignatureOutOfProcess;
- (id)performSignature;
- (void)regenerateAttestationKeys;
- (id)signWithPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 error:(id *)a1;

@end
