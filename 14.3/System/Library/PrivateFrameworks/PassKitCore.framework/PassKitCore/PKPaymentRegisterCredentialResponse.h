@class NSURL, NSData;

@interface PKPaymentRegisterCredentialResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSURL *passURL;
@property (readonly, nonatomic) NSData *credentialAttestation;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
