@class NSData, PKAuthenticatorEvaluationResponse;

@interface PKPaymentAuthorizationNonceStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSData *credential;
@property (retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse;

+ (id)paramWithCredential:(id)a0;
+ (id)paramWithAuthenticatorEvaluationResponse:(id)a0;

- (void).cxx_destruct;
- (id)description;

@end
