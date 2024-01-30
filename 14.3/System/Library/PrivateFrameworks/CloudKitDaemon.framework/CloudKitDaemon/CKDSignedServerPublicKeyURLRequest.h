@class NSURL, CKPublicKey;

@interface CKDSignedServerPublicKeyURLRequest : CKDURLRequest

@property (readonly, nonatomic) NSURL *plistURL;
@property (readonly, nonatomic) struct __SecPolicy { } *certificateTrustPolicy;
@property (retain) CKPublicKey *verifiedPublicKey;

+ (BOOL)serverResponseIsComplete:(id)a0;
+ (id)certificateListServerPlist:(id)a0;
+ (struct __SecTrust { } *)createTrustEvalFromCertificateList:(id)a0 verifiedWithPolicy:(struct __SecPolicy { } *)a1;
+ (id)nearestExpirationInCertificateList:(id)a0;
+ (BOOL)verifyData:(id)a0 withSignature:(id)a1 usingKey:(struct __SecKey { } *)a2;
+ (BOOL)verifyInteger:(long long)a0 withSignature:(id)a1 usingKey:(struct __SecKey { } *)a2;

- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (void)dealloc;
- (id)url;
- (id)httpMethod;
- (long long)partitionType;
- (void)requestDidParsePlistObject:(id)a0;
- (long long)serverType;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresTokenRegistration;
- (BOOL)hasRequestBody;
- (BOOL)canVerifySignedPlistValues:(id)a0 withKey:(struct __SecKey { } *)a1;
- (id)initWithOperation:(id)a0 plistURL:(id)a1 verifyWithPolicy:(struct __SecPolicy { } *)a2;

@end
