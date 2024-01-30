@class NSSet, NSString, SBWindowScene;

@interface SBPIPEnvironmentDependentOverrideAssertion : SBPIPBehaviorOverrideAssertion <SBLayoutStateTransitionObserver> {
    SBWindowScene *_windowScene;
}

@property (nonatomic) BOOL invalidatesEarly;
@property (copy, nonatomic) NSSet *allowedEnvironmentModes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_layoutCoordinator;
- (void)dealloc;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void).cxx_destruct;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (long long)_environmentModeForLayoutState:(id)a0;
- (void)_updateStateForTransitionWithContext:(id)a0;
- (id)initWithReason:(long long)a0 identifier:(id)a1 windowScene:(id)a2 invalidationBlock:(id /* block */)a3;

@end
