@class NSData;

@interface PKPaymentAugmentBaseResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSData *networkMerchantIdentifier;
@property (readonly, nonatomic) long long cryptogramType;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
