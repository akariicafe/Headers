@interface PKPeerPaymentPerformActionResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) long long status;

- (id)initWithData:(id)a0;

@end
