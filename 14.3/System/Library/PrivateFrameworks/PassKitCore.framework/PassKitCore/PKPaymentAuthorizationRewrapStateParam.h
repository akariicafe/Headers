@class PKWrappedPayment, NSData;

@interface PKPaymentAuthorizationRewrapStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) PKWrappedPayment *wrappedPayment;
@property (retain, nonatomic) NSData *nonceData;
@property (retain, nonatomic) NSData *credential;
@property (nonatomic) long long cryptogramType;

+ (id)paramWithWrappedPayment:(id)a0 nonce:(id)a1 credential:(id)a2 cryptogramType:(long long)a3;

- (void).cxx_destruct;
- (id)description;

@end
