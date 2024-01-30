@class NSURL, NSData;

@interface PKPaymentRegisterCredentialResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSURL *passURL;
@property (readonly, nonatomic) NSData *credentialAttestation;
@property (readonly, nonatomic) NSData *ephemeralPublicKey;
@property (readonly, nonatomic) NSData *encryptedData;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
