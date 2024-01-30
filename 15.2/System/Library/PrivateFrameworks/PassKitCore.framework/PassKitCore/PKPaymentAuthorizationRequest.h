@class NSData, PKPaymentRequest;

@interface PKPaymentAuthorizationRequest : NSObject

@property (retain, nonatomic) NSData *credential;
@property (retain, nonatomic) NSData *nonceData;
@property (readonly, nonatomic) PKPaymentRequest *paymentRequest;

- (id)initWithPaymentRequest:(id)a0;
- (void).cxx_destruct;

@end
