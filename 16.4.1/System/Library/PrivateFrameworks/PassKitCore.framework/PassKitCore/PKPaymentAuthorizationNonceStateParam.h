@class NSData, PKAuthenticatorEvaluationResponse;

@interface PKPaymentAuthorizationNonceStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSData *credential;
@property (retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse;

+ (id)paramWithAuthenticatorEvaluationResponse:(id)a0;
+ (id)paramWithCredential:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
