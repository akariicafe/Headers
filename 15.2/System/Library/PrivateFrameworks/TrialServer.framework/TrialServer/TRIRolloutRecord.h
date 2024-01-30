@class TRIClientRolloutArtifact, NSString, NSArray, TRIRolloutDeployment, NSNumber;
@protocol TRIRampId, TRIFactorPackSetId;

@interface TRIRolloutRecord : NSObject <NSCopying>

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;
@property (readonly, nonatomic) NSString<TRIRampId> *rampId;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *activeFactorPackSetId;
@property (readonly, nonatomic) NSNumber *activeTargetingRuleIndex;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *targetedFactorPackSetId;
@property (readonly, nonatomic) NSNumber *targetedTargetingRuleIndex;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSArray *namespaces;
@property (readonly, nonatomic) BOOL isShadow;
@property (readonly, nonatomic) TRIClientRolloutArtifact *artifact;

+ (id)recordWithDeployment:(id)a0 rampId:(id)a1 activeFactorPackSetId:(id)a2 activeTargetingRuleIndex:(id)a3 targetedFactorPackSetId:(id)a4 targetedTargetingRuleIndex:(id)a5 status:(long long)a6 namespaces:(id)a7 isShadow:(BOOL)a8 artifact:(id)a9;

- (BOOL)isEqualToRecord:(id)a0;
- (id)copyWithReplacementNamespaces:(id)a0;
- (id)copyWithReplacementTargetedTargetingRuleIndex:(id)a0;
- (id)initWithDeployment:(id)a0 rampId:(id)a1 activeFactorPackSetId:(id)a2 activeTargetingRuleIndex:(id)a3 targetedFactorPackSetId:(id)a4 targetedTargetingRuleIndex:(id)a5 status:(long long)a6 namespaces:(id)a7 isShadow:(BOOL)a8 artifact:(id)a9;
- (id)description;
- (id)copyWithReplacementTargetedFactorPackSetId:(id)a0;
- (id)copyWithReplacementActiveFactorPackSetId:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementIsShadow:(BOOL)a0;
- (id)copyWithReplacementArtifact:(id)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementActiveTargetingRuleIndex:(id)a0;
- (id)copyWithReplacementDeployment:(id)a0;
- (id)copyWithReplacementRampId:(id)a0;
- (id)copyWithReplacementStatus:(long long)a0;

@end
