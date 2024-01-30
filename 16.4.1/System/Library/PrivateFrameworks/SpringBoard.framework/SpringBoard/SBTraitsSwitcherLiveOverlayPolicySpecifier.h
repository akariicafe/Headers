@class NSString;

@interface SBTraitsSwitcherLiveOverlayPolicySpecifier : SBAbstractTraitsSwitcherPolicySpecifier

@property (nonatomic) long long primaryElementResolutionPolicy;
@property (copy, nonatomic) NSString *primaryElementParticipantIdentifier;
@property (nonatomic) long long nonPrimaryResolutionPolicy;

- (id)_specifierDescription;
- (id)initWithComponentOrder:(id)a0 arbiter:(id)a1;
- (void)_updateParticipant:(id)a0 withPolicy:(long long)a1 context:(id)a2;
- (void).cxx_destruct;
- (void)_updateAcquiredParticipantsPolicies:(id)a0 context:(id)a1;

@end
