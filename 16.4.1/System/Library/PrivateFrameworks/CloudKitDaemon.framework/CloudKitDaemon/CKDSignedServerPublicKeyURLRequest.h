@class NSURL, CKPublicKey, NSDate;

@interface CKDSignedServerPublicKeyURLRequest : CKDURLRequest

@property (readonly, nonatomic) NSURL *plistURL;
@property (readonly, nonatomic) struct __SecPolicy { } *certificateTrustPolicy;
@property (retain) CKPublicKey *verifiedPublicKey;
@property (nonatomic) BOOL requiresProtectionSource;
@property (nonatomic) BOOL verifyFullIntegers;
@property (retain, nonatomic) NSDate *expirationDateOverride;

+ (id)certificateListServerPlist:(id)a0;
+ (struct __SecTrust { } *)createTrustEvalFromCertificateList:(id)a0 verifiedWithPolicy:(struct __SecPolicy { } *)a1;
+ (id)nearestExpirationInCertificateList:(id)a0;
+ (BOOL)serverResponseIsComplete:(id)a0 requireProtectionSource:(BOOL)a1;
+ (BOOL)verifyData:(id)a0 withSignature:(id)a1 usingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;
+ (BOOL)verifyInteger:(long long)a0 withSignature:(id)a1 usingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 verifyFullInteger:(BOOL)a3;

- (long long)partitionType;
- (BOOL)allowsAnonymousAccount;
- (id)httpMethod;
- (id)url;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)canVerifySignedPlistValues:(id)a0 withKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;
- (BOOL)hasRequestBody;
- (id)initWithOperation:(id)a0 plistURL:(id)a1 verifyWithPolicy:(struct __SecPolicy { } *)a2;
- (void)requestDidParsePlistObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresTokenRegistration;
- (long long)serverType;

@end
