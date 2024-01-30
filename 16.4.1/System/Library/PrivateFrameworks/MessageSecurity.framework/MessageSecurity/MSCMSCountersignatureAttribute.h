@class NSArray, MSCMSSignerInfo, MSOID;

@interface MSCMSCountersignatureAttribute : NSObject <MSCMSAttributeCoder>

@property unsigned long long chainMode;
@property (retain) NSArray *additionalCertificates;
@property (weak, nonatomic) MSCMSSignerInfo *containingSignerInfo;
@property (readonly) NSArray *signers;
@property (readonly, retain) MSOID *attributeType;

- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (void)removeSignersWithIndexes:(id)a0 error:(id *)a1;
- (void)addSigner:(id)a0;
- (void)addSigner:(id)a0 withCertificates:(id)a1;
- (void)addSigner:(id)a0 withChainMode:(unsigned long long)a1 error:(id *)a2;
- (id)encodeAttributeWithError:(id *)a0;
- (id)initWithAttribute:(id)a0 LAContext:(id)a1 error:(id *)a2;
- (id)initWithAttribute:(id)a0 certificates:(id)a1 LAContext:(id)a2 containingSignerInfo:(id)a3 error:(id *)a4;
- (id)initWithAttribute:(id)a0 certificates:(id)a1 LAContext:(id)a2 error:(id *)a3;
- (id)initWithSignerInfo:(id)a0;
- (id)initWithSignerInfo:(id)a0 additionalCertificates:(id)a1;
- (id)initWithSignerInfo:(id)a0 signerChainMode:(unsigned long long)a1;
- (id)initWithSignerInfo:(id)a0 signerChainMode:(unsigned long long)a1 additionalCertificates:(id)a2;
- (void)removeSignerCertificatesWithIndexes:(id)a0;
- (void)removeSignersWithCertificate:(struct __SecCertificate { } *)a0 error:(id *)a1;
- (void)removeSignersWithEmailAddress:(id)a0 error:(id *)a1;
- (void)removeSignersWithIdentity:(struct __SecIdentity { } *)a0 error:(id *)a1;
- (BOOL)verifyCountersignatures:(id)a0 error:(id *)a1;
- (BOOL)verifyCountersignaturesAndCountersignersWithPolicies:(id)a0 verifyTime:(id)a1 anchorCertificates:(id)a2 signature:(id)a3 error:(id *)a4;

@end
