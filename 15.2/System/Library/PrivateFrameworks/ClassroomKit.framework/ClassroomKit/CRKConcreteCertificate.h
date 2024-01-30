@class NSArray, NSString, NSData, NSDateInterval;

@interface CRKConcreteCertificate : NSObject <CRKCertificate>

@property (readonly, copy, nonatomic) NSArray *commonNames;
@property (readonly, copy, nonatomic) NSString *fingerprint;
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, nonatomic) NSDateInterval *validityDateInterval;
@property (readonly, nonatomic, getter=isTemporallyValid) BOOL temporallyValid;
@property (readonly, nonatomic, getter=isCertificateAuthority) BOOL certificateAuthority;
@property (readonly, nonatomic) unsigned int hashingAlgorithm;
@property (readonly, nonatomic) long long keySizeInBits;
@property (readonly, nonatomic) struct __SecCertificate { } *underlyingCertificate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)certificateWithData:(id)a0;

- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (void)dealloc;

@end
