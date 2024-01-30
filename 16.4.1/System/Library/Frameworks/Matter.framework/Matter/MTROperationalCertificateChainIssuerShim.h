@protocol MTRNOCChainIssuer;

@interface MTROperationalCertificateChainIssuerShim : NSObject <MTROperationalCertificateIssuer>

@property (readonly, nonatomic) id<MTRNOCChainIssuer> nocChainIssuer;
@property (readonly, nonatomic) BOOL shouldSkipAttestationCertificateValidation;

- (void).cxx_destruct;
- (id)initWithIssuer:(id)a0;
- (void)issueOperationalCertificateForRequest:(id)a0 attestationInfo:(id)a1 controller:(id)a2 completion:(id /* block */)a3;

@end
