@class NSString, NSArray, NSData, PKSecureElementSignatureInfo;

@interface PKAuxiliaryCapabilityFetchBarcodeRequest : PKAuxiliaryCapabilityWebServiceRequest

@property (copy, nonatomic) NSString *dpanIdentifier;
@property (nonatomic) long long barcodeCount;
@property (copy, nonatomic) NSString *lastUsedBarcodeIdentifier;
@property (copy, nonatomic) NSArray *encryptionCertificateChain;
@property (nonatomic) long long fetchReason;
@property (copy, nonatomic) NSData *signatureData;
@property (retain, nonatomic) PKSecureElementSignatureInfo *signatureInfo;

- (void).cxx_destruct;
- (id)_dataToSign;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
