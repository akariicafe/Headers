@class NSData;

@interface PKAppletSubcredentialAccountAttestationRequest : PKAccountAttestationRequest

@property (copy, nonatomic) NSData *subCASEResidencyAttestation;
@property (copy, nonatomic) NSData *sharingTokenHash;

- (id)initWithRequestData:(id)a0;
- (void).cxx_destruct;

@end
