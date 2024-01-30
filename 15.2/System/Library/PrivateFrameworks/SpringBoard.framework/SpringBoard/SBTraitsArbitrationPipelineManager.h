@class SBTraitsHomeFollowsSwitcherPolicySpecifier, NSString, SBFTraitsArbiter, SBTraitsDockFollowsHomePolicySpecifier;

@interface SBTraitsArbitrationPipelineManager : NSObject <SBLayoutStateTransitionObserver> {
    SBTraitsDockFollowsHomePolicySpecifier *_dockFollowsHomeSpecifier;
    SBTraitsHomeFollowsSwitcherPolicySpecifier *_homeFollowsSwitcherSpecifier;
}

@property (weak, nonatomic) SBFTraitsArbiter *arbiter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_layoutCoordinator;
- (id)initWithArbiter:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
