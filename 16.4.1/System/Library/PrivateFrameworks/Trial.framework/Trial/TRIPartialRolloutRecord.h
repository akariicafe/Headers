@class NSString, NSArray, TRIRolloutDeployment, NSNumber;
@protocol TRIRampId, TRIFactorPackSetId;

@interface TRIPartialRolloutRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;
@property (readonly, nonatomic) NSString<TRIRampId> *rampId;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *activeFactorPackSetId;
@property (readonly, nonatomic) NSNumber *activeTargetingRuleIndex;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *targetedFactorPackSetId;
@property (readonly, nonatomic) NSNumber *targetedTargetingRuleIndex;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSArray *namespaces;
@property (readonly, nonatomic) BOOL isShadow;

+ (id)partialRecordWithFullRecord:(id)a0;
+ (id)recordWithDeployment:(id)a0 rampId:(id)a1 activeFactorPackSetId:(id)a2 activeTargetingRuleIndex:(id)a3 targetedFactorPackSetId:(id)a4 targetedTargetingRuleIndex:(id)a5 status:(long long)a6 namespaces:(id)a7 isShadow:(BOOL)a8;

- (BOOL)isEqualToRecord:(id)a0;
- (id)copyWithReplacementNamespaces:(id)a0;
- (id)copyWithReplacementStatus:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementTargetedTargetingRuleIndex:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementActiveTargetingRuleIndex:(id)a0;
- (id)copyWithReplacementRampId:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDeployment:(id)a0 rampId:(id)a1 activeFactorPackSetId:(id)a2 activeTargetingRuleIndex:(id)a3 targetedFactorPackSetId:(id)a4 targetedTargetingRuleIndex:(id)a5 status:(long long)a6 namespaces:(id)a7 isShadow:(BOOL)a8;
- (unsigned long long)hash;
- (id)copyWithReplacementActiveFactorPackSetId:(id)a0;
- (id)init;
- (id)description;
- (id)copyWithReplacementTargetedFactorPackSetId:(id)a0;
- (id)copyWithReplacementDeployment:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementIsShadow:(BOOL)a0;

@end
