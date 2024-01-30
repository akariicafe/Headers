@class NSString;

@interface PKPeerPaymentAcceptTermsRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *termsIdentifier;

- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1 deviceIdentifier:(id)a2;
- (void).cxx_destruct;

@end
