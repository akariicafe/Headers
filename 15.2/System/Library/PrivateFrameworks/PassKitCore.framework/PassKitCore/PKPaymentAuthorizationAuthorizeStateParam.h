@class NSData, PKAuthenticatorEvaluationResponse;

@interface PKPaymentAuthorizationAuthorizeStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSData *credential;
@property (retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse;
@property (retain, nonatomic) NSData *nonceData;
@property (nonatomic) long long cryptogramType;
@property (retain, nonatomic) NSData *networkMerchantIdentifier;

+ (id)paramWithCredential:(id)a0;
+ (id)paramWithAuthenticatorEvaluationResponse:(id)a0;
+ (id)paramWithNonceParam:(id)a0 nonce:(id)a1 cryptogramType:(long long)a2 networkMerchantIdentifier:(id)a3;

- (id)description;
- (void).cxx_destruct;

@end
