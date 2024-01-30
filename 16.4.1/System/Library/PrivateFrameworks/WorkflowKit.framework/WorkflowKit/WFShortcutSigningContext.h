@class NSArray, SFAppleIDValidationRecord, NSData, NSDate;

@interface WFShortcutSigningContext : NSObject

@property (readonly, copy, nonatomic) NSArray *signingCertificateChain;
@property (readonly, nonatomic) SFAppleIDValidationRecord *appleIDValidationRecord;
@property (readonly, copy, nonatomic) NSArray *appleIDCertificateChain;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *signingPublicKey;
@property (retain, nonatomic) NSData *signingPublicKeySignature;
@property (readonly, nonatomic) NSDate *expirationDate;

+ (id)contextWithAppleIDAccount:(id)a0 signingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;
+ (id)contextWithAuthData:(id)a0;
+ (id)contextWithSigningCertificateChain:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)validateWithCompletion:(id /* block */)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPublicKey;
- (id)generateAuthData;
- (id)initWithAppleIDValidationRecord:(id)a0 appleIDCertificateChain:(id)a1 signingPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 signingPublicKeyData:(id)a3;
- (id)initWithSigningCertificateChain:(id)a0;
- (BOOL)validateAppleIDCertificatesWithError:(id *)a0;
- (void)validateAppleIDValidationRecordWithCompletion:(id /* block */)a0;
- (BOOL)validateSigningCertificateChainWithICloudIdentifier:(id *)a0 error:(id *)a1;
- (BOOL)validateWithSigningMethod:(long long *)a0 error:(id *)a1;
- (BOOL)validateWithSigningMethod:(long long *)a0 iCloudIdentifier:(id *)a1 error:(id *)a2;

@end
