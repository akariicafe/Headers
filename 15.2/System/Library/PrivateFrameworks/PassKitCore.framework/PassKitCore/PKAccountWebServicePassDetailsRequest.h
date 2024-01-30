@class NSString, NSURL, PKPaymentDeviceMetadata;

@interface PKAccountWebServicePassDetailsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;

- (id)_urlRequestWithAppleAccountInformation:(id)a0 deviceIdentifier:(id)a1;
- (void).cxx_destruct;

@end
