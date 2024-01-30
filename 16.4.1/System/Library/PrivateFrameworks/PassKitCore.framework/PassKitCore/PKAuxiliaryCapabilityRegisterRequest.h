@class NSArray, NSDictionary, NSData, PKSecureElementSignatureInfo;

@interface PKAuxiliaryCapabilityRegisterRequest : PKAuxiliaryCapabilityWebServiceRequest

@property (copy, nonatomic) NSArray *dpanIdentifiers;
@property (copy, nonatomic) NSArray *validCertificatesOnDevice;
@property (copy, nonatomic) NSDictionary *deviceOwnedKeyMaterials;
@property (copy, nonatomic) NSData *signatureData;
@property (retain, nonatomic) PKSecureElementSignatureInfo *signatureInfo;

- (void).cxx_destruct;
- (id)_dataToSign;
- (id)_groupedKeyMaterial;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
