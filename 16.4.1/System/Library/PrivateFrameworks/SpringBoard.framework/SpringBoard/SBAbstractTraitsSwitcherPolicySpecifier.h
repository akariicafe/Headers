@class NSString, SBTraitsPipelineBlockBasedPolicySpecifier;

@interface SBAbstractTraitsSwitcherPolicySpecifier : NSObject <BSInvalidatable> {
    SBTraitsPipelineBlockBasedPolicySpecifier *_blockBasedPolicySpecifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_specifierDescription;
- (void)invalidate;
- (id)initWithComponentOrder:(id)a0 arbiter:(id)a1;
- (void).cxx_destruct;
- (void)_updateAcquiredParticipantsPolicies:(id)a0 context:(id)a1;
- (id)_blockBasedPolicySpecifier;

@end
