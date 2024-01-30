@class NSArray, NSData, MSAlgorithmIdentifier, NSNumber;

@interface MSCMSRecipientInfo : NSObject

@property (retain) NSArray *algorithmCapabilities;
@property (retain) NSNumber *version;
@property (retain) NSData *encryptedKey;
@property (retain) MSAlgorithmIdentifier *keyEncryptionAlgorithm;
@property struct __SecCertificate { } *recipientCertificate;

+ (id)decodeRecipientInfo:(struct KeyTransRecipientInfo { int x0; struct heim_base_data { unsigned long long x0; void *x1; } x1; struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } x2; struct heim_base_data { unsigned long long x0; void *x1; } x3; } *)a0 certificates:(id)a1 LAContext:(id)a2 error:(id *)a3;

- (id)key;
- (void)dealloc;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (void).cxx_destruct;
- (id)initWithEmail:(id)a0;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0 algorithmCapabilities:(id)a1;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0 keyEncryptionAlgorithm:(id)a1;
- (id)initWithEmail:(id)a0 algorithmCapabilities:(id)a1;
- (id)initWithEmail:(id)a0 keyEncryptionAlgorithm:(id)a1;

@end
