@class NSData, NSString, NSArray, NSSet, NSMutableSet, MSDecodeOptions, MSOID, NSNumber;
@protocol MSCMSMessage;

@interface MSCMSSignedData : NSObject <MSCMSMessage>

@property (retain) NSNumber *version;
@property (retain) NSArray *signers;
@property (retain) NSSet *digestAlgorithms;
@property (retain) MSDecodeOptions *options;
@property BOOL contentChanged;
@property BOOL detached;
@property (retain) NSMutableSet *certificates;
@property (readonly) MSOID *type;
@property (retain, nonatomic) NSData *dataContent;
@property (retain) id<MSCMSMessage> embeddedContent;
@property (retain) MSOID *contentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodeMessageSecurityObject:(id)a0 options:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)encodeMessageSecurityObject:(id *)a0;
- (id)initWithDataContent:(id)a0 isDetached:(BOOL)a1 signer:(id)a2 additionalCertificates:(id)a3 error:(id *)a4;
- (BOOL)verifySignatures:(id *)a0;
- (BOOL)verifySignaturesAndSignersWithPolicies:(id)a0 verifyTime:(id)a1 error:(id *)a2;
- (void)removeSignersWithIndexes:(id)a0 error:(id *)a1;
- (BOOL)addCertificatesForSigner:(id)a0 mode:(unsigned long long)a1 error:(id *)a2;
- (void)addCounterSignerCertificates:(id)a0 mode:(unsigned long long)a1 error:(id *)a2;
- (void)addDigestAlgorithmFromSigner:(id)a0;
- (void)addSigner:(id)a0;
- (void)addSigner:(id)a0 withCertificates:(id)a1;
- (BOOL)addSigner:(id)a0 withChainMode:(unsigned long long)a1 error:(id *)a2;
- (id)calculateContentDigestWithAlgorithm:(id)a0 error:(id *)a1;
- (BOOL)checkSignedPerRFC5652:(id *)a0;
- (struct __SecCertificate { } *)getSignerCertificate:(unsigned long long)a0 error:(id *)a1;
- (id)initCertsOnlyWithCertificates:(id)a0 error:(id *)a1;
- (id)initWithDataContent:(id)a0 isDetached:(BOOL)a1 signer:(id)a2 error:(id *)a3;
- (id)initWithDataContent:(id)a0 isDetached:(BOOL)a1 signer:(id)a2 signerChainMode:(unsigned long long)a3 error:(id *)a4;
- (id)initWithEmbeddedContent:(id)a0 signer:(id)a1 additionalCertificates:(id)a2 error:(id *)a3;
- (id)initWithEmbeddedContent:(id)a0 signer:(id)a1 error:(id *)a2;
- (id)initWithEmbeddedContent:(id)a0 signer:(id)a1 signerChainMode:(unsigned long long)a2 error:(id *)a3;
- (void)removeSignerCertificatesWithIndexes:(id)a0;
- (void)removeSignersWithCertificate:(struct __SecCertificate { } *)a0 error:(id *)a1;
- (void)removeSignersWithEmailAddress:(id)a0 error:(id *)a1;
- (void)removeSignersWithIdentity:(struct __SecIdentity { } *)a0 error:(id *)a1;
- (BOOL)verifySignaturesAndSignersWithPolicies:(id)a0 verifyTime:(id)a1 anchorCertificates:(id)a2 error:(id *)a3;

@end
