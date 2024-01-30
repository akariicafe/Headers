@class NSString;

@interface PKPaymentRequestPassUpdateResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *passURL;
@property (readonly, nonatomic) unsigned long long appletState;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
