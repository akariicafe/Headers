@class NSString, NSArray, PKPaymentPass;

@interface PKAuxiliaryCapabilityFetchBarcodeRequest : PKAuxiliaryCapabilityWebServiceRequest

@property (copy, nonatomic) NSString *dpanIdentifier;
@property (nonatomic) long long barcodeCount;
@property (copy, nonatomic) NSString *lastUsedBarcodeIdentifier;
@property (copy, nonatomic) NSArray *encryptionCertificateChain;
@property (nonatomic) long long fetchReason;
@property (retain, nonatomic) PKPaymentPass *pass;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2 webService:(id)a3 completion:(id /* block */)a4;

@end
