@class NSString, NSMapTable, _SBUIPresentableGestureRecognizerPriorityAssertion, _SBUIPresentableDismissalPreventionAssertion;

@interface SBUIBannerClientContainerViewController : BNBannerClientContainerViewController <SBUISystemApertureElementContextObserver, SBUIPresentableHomeGestureContext, SBUIPresentableDismissalPreventionContext, SBUIPresentableGestureRecognizerPriorityContext, SBUIPresentableButtonEventsContext> {
    _SBUIPresentableDismissalPreventionAssertion *_transitionDismissalPreventionAssertion;
    _SBUIPresentableGestureRecognizerPriorityAssertion *_gestureRecognizerPriorityAssertion;
    NSMapTable *_buttonEventsToActions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL ownsHomeGesture;

- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (id)_transitionCoordinator;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)_buttonEventsActionForButtonEvent:(long long)a0;
- (void)_removeButtonEventsActionForButtonEvent:(long long)a0;
- (void)_setButtonEventAction:(id)a0 forButtonEvent:(long long)a1;
- (id)acquireAssertionForButtonEvent:(long long)a0 reason:(id)a1;
- (id)acquireGestureRecognizerDefaultPriorityAssertionForReason:(id)a0;
- (id)acquireTransitionDismissalPreventionAssertionForReason:(id)a0;
- (id)initWithScene:(id)a0 presentable:(id)a1 context:(id)a2;
- (BOOL)isAccessibilityIgnoringSmartInvertColors;
- (void)setWantsHomeGesture:(BOOL)a0;
- (void)systemApertureElementContextPresentationDidBecomePossible:(id)a0;

@end
