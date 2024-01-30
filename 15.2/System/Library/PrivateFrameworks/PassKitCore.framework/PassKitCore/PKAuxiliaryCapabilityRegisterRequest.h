@class NSArray, NSData, PKSecureElementSignatureInfo;

@interface PKAuxiliaryCapabilityRegisterRequest : PKAuxiliaryCapabilityWebServiceRequest

@property (copy, nonatomic) NSArray *dpanIdentifiers;
@property (copy, nonatomic) NSData *deviceSignatureKeyAttestation;
@property (copy, nonatomic) NSData *deviceDecryptionKeyAttestation;
@property (copy, nonatomic) NSArray *validCertificatesOnDevice;
@property (copy, nonatomic) NSData *signatureData;
@property (retain, nonatomic) PKSecureElementSignatureInfo *signatureInfo;

- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;
- (id)_dataToSign;

@end
