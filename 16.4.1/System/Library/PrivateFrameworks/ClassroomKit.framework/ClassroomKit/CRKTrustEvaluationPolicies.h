@class NSArray;

@interface CRKTrustEvaluationPolicies : NSObject

@property (class, readonly, nonatomic) CRKTrustEvaluationPolicies *defaultPoliciesForClientEvaluation;
@property (class, readonly, nonatomic) CRKTrustEvaluationPolicies *defaultPolicicesForServerEvaluation;

@property (readonly, copy, nonatomic) NSArray *policyRefs;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPolicyRefs:(id)a0;

@end
