@class NSString, NSURL, PKPaymentDeviceMetadata;

@interface PKAccountWebServicePassDetailsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0 deviceIdentifier:(id)a1;

@end
