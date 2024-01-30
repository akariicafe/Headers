@class NSString;

@interface PKPeerPaymentPendingRequestPerformActionResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSString *status;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
