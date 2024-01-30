@class NSString;

@interface SBTraitsSwitcherPolicySpecifier : SBAbstractTraitsSwitcherPolicySpecifier

@property (nonatomic) long long resolutionPolicy;
@property (copy, nonatomic) NSString *primaryElementParticipantIdentifier;

- (id)_specifierDescription;
- (id)initWithComponentOrder:(id)a0 arbiter:(id)a1;
- (void).cxx_destruct;
- (void)_updateAcquiredParticipantsPolicies:(id)a0 context:(id)a1;

@end
