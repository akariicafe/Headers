@class NSArray, NSData, PKPaymentPass;

@interface PKAuxiliaryCapabilityRegisterRequest : PKAuxiliaryCapabilityWebServiceRequest

@property (copy, nonatomic) NSArray *dpanIdentifiers;
@property (copy, nonatomic) NSData *deviceSignatureKeyAttestation;
@property (copy, nonatomic) NSData *deviceDecryptionKeyAttestation;
@property (copy, nonatomic) NSArray *validCertificatesOnDevice;
@property (retain, nonatomic) PKPaymentPass *pass;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2 webService:(id)a3 completion:(id /* block */)a4;

@end
