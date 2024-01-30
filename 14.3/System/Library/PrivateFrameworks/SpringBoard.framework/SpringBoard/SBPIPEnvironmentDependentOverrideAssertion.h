@class NSSet, NSString;

@interface SBPIPEnvironmentDependentOverrideAssertion : SBPIPBehaviorOverrideAssertion <SBLayoutStateTransitionObserver>

@property (nonatomic) BOOL invalidatesEarly;
@property (copy, nonatomic) NSSet *allowedEnvironmentModes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)_layoutCoordinator;
- (id)initWithReason:(long long)a0 identifier:(id)a1 invalidationBlock:(id /* block */)a2;
- (id)initWithReason:(long long)a0 invalidationBlock:(id /* block */)a1;
- (long long)_environmentModeForLayoutState:(id)a0;
- (void)_updateStateForTransitionWithContext:(id)a0;

@end
