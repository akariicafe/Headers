@class NSArray;

@interface PKPeerPaymentPendingRequestsResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *requestSummaries;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
