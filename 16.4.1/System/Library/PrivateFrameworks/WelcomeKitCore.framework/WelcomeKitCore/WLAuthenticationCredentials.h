@interface WLAuthenticationCredentials : NSObject

@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *privateKey;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *publicKey;
@property (nonatomic) struct __SecCertificate { } *localCertificate;
@property (nonatomic) struct __SecCertificate { } *remoteCertificate;

+ (id)generateAuthenticationCredentialsContainingSelfSignedCertificate;

@end
