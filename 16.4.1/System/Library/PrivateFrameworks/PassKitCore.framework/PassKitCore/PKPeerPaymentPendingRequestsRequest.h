@class NSArray;

@interface PKPeerPaymentPendingRequestsRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSArray *requestTokens;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
