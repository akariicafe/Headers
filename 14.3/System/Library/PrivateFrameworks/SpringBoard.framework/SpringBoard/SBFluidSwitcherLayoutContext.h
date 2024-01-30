@class SBFluidSwitcherGesture, SBMainDisplayLayoutState, SBAppLayout, SBHomeGestureSettings, NSDate, SBWorkspaceApplicationSceneTransitionContext, NSString;

@interface SBFluidSwitcherLayoutContext : NSObject <BSDescriptionProviding, SBMainDisplayWorkspaceAppInteractionEventSourceObserving>

@property (retain, nonatomic) SBMainDisplayLayoutState *currentLayoutState;
@property (retain, nonatomic) SBMainDisplayLayoutState *previousLayoutState;
@property (nonatomic) long long previousInterfaceOrientation;
@property (retain, nonatomic) SBAppLayout *currentAppLayout;
@property (retain, nonatomic) SBAppLayout *transitioningFromAppLayout;
@property (retain, nonatomic) SBAppLayout *transitioningToAppLayout;
@property (retain, nonatomic) NSDate *lastTransitionCompletionDate;
@property (nonatomic) BOOL hasUserInteractedWithActiveApplication;
@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings;
@property (readonly, nonatomic) SBMainDisplayLayoutState *layoutState;
@property (retain, nonatomic) SBFluidSwitcherGesture *activeGesture;
@property (readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *activeTransitionContext;
@property (readonly, nonatomic) SBMainDisplayLayoutState *transitioningFromLayoutState;
@property (readonly, nonatomic) SBMainDisplayLayoutState *transitioningToLayoutState;
@property (readonly, nonatomic) double secondsSinceLastTransitionCompletion;
@property (readonly, nonatomic) unsigned long long supportedOrientationsForGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndTransitioningToLayoutStateWithContext:(id)a0;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)eventSource:(id)a0 userTouchedApplication:(id)a1;
- (BOOL)shouldAddAppLayoutToFront:(id)a0 forTransitionWithContext:(id)a1 currentAppLayouts:(id)a2 transitionCompleted:(BOOL)a3;
- (void)willBeginTransitioningToLayoutStateWithContext:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)_shouldUpdateSwitcherModelBasedOnTimeOrUserInteraction;
- (id)succinctDescriptionBuilder;
- (id)initWithLayoutState:(id)a0;
- (BOOL)shouldAddAppLayoutToFront:(id)a0 whenBeginningGestureOfType:(long long)a1;

@end
