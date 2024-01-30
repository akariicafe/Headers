@class MSCMSMutableAttributeArray, NSArray, NSData, MSAlgorithmIdentifier, NSNumber, MSCMSSignedData;

@interface MSCMSSignerInfo : NSObject

@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *signerPrivKey;
@property struct SignerInfo { int x0; struct heim_base_data { unsigned long long x0; void *x1; } x1; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } x2; struct heim_base_data *x3; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } x4; struct heim_base_data { unsigned long long x0; void *x1; } x5; struct heim_base_data *x6; } *encodedSignerInfo;
@property struct __SecCertificate { } *signerCertificate;
@property (retain) MSAlgorithmIdentifier *signatureAlgorithm;
@property (retain) NSData *signedAttrsData;
@property (retain) NSData *unsignedAttrsData;
@property (retain) NSData *identifierData;
@property (retain) NSNumber *version;
@property (weak) MSCMSSignedData *containingSignedData;
@property (retain) MSAlgorithmIdentifier *digestAlgorithm;
@property (readonly) NSArray *certificates;
@property BOOL contentChanged;
@property (readonly) BOOL signatureCalculated;
@property (retain) MSCMSMutableAttributeArray *protectedAttributes;
@property (retain, nonatomic) NSData *signature;
@property (retain) MSCMSMutableAttributeArray *unprotectedAttributes;
@property (retain) NSData *LAContext;

+ (id)decodeSignerInfo:(struct SignerInfo { int x0; struct heim_base_data { unsigned long long x0; void *x1; } x1; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } x2; struct heim_base_data *x3; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } x4; struct heim_base_data { unsigned long long x0; void *x1; } x5; struct heim_base_data *x6; } *)a0 certificates:(id)a1 LAContext:(id)a2 error:(id *)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addProtectedAttribute:(id)a0;
- (id)calculateSignerInfoDigest:(id *)a0;
- (struct __SecTrust { } *)createTrustObjectWithPolicies:(id)a0 error:(id *)a1;
- (id)getAttributesWithType:(id)a0;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0 signatureAlgorithm:(id)a1 error:(id *)a2;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0 error:(id *)a1;
- (void)addCounterSignerAttribute:(id)a0;
- (id)calculateSignatureDigestWithAlgorithm:(id)a0 error:(id *)a1;
- (id)calculateSignedAttributesDigest:(id *)a0;
- (BOOL)createRequiredAttributes:(id *)a0;
- (struct __SecTrust { } *)createTrustObjectWithPolicies:(id)a0 verifyTime:(id)a1 anchorCertificates:(id)a2 error:(id *)a3;
- (BOOL)encodeSignerInfo:(struct SignerInfo { int x0; struct heim_base_data { unsigned long long x0; void *x1; } x1; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } x2; struct heim_base_data *x3; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } x4; struct heim_base_data { unsigned long long x0; void *x1; } x5; struct heim_base_data *x6; } *)a0 error:(id *)a1;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0 error:(id *)a1;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0 recipientsAlgorithmCapabilities:(id)a1 error:(id *)a2;
- (id)initWithEmail:(id)a0 LAContext:(id)a1 error:(id *)a2;
- (id)initWithEmail:(id)a0 recipientsAlgorithmCapabilities:(id)a1 LAContext:(id)a2 error:(id *)a3;
- (id)initWithEmail:(id)a0 signatureAlgorithm:(id)a1 LAContext:(id)a2 error:(id *)a3;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0 recipientsAlgorithmCapabilities:(id)a1 error:(id *)a2;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0 signatureAlgorithm:(id)a1 error:(id *)a2;
- (BOOL)sign:(id *)a0;
- (BOOL)verifyContentTypeAttribute:(id *)a0;
- (BOOL)verifyCountersignatures:(id *)a0;
- (BOOL)verifyCountersignaturesAndCountersignersWithPolicies:(id)a0 verifyTime:(id)a1 anchorCertificates:(id)a2 error:(id *)a3;
- (BOOL)verifyMessageDigestAttribute:(id)a0 error:(id *)a1;
- (BOOL)verifySignature:(id *)a0;
- (BOOL)verifySignatureAndSignerWithPolicies:(id)a0 verifyTime:(id)a1 anchorCertificates:(id)a2 error:(id *)a3;
- (id)verifyTime:(id)a0;
- (BOOL)verifyTimestamps:(id *)a0;

@end
