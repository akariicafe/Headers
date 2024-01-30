@class NSString;

@interface PKPeerPaymentStatusRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *paymentIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
