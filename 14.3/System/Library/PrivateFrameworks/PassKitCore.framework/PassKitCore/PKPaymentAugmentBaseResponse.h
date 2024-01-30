@class NSData;

@interface PKPaymentAugmentBaseResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSData *networkMerchantIdentifier;
@property (readonly, nonatomic) long long cryptogramType;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
