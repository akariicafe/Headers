@class FAFamilyCreditCard;

@interface FAFamilyPaymentInfoResponse : AAResponse

@property (retain, nonatomic) FAFamilyCreditCard *creditCard;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
