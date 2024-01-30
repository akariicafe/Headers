@class NSString;

@interface MPCPolicyEvaluation : NSObject

@property (nonatomic, getter=shouldDisableVocalAttenuation) BOOL disableVocalAttenuation;
@property (nonatomic) long long policyType;
@property (copy, nonatomic) NSString *explanation;
@property (nonatomic) BOOL canBeOverriden;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
