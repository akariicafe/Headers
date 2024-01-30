@class NSString, NSMapTable, _SBUIPresentableGestureRecognizerPriorityAssertion, _SBUIPresentableDismissalPreventionAssertion;

@interface SBUIBannerClientContainerViewController : BNBannerClientContainerViewController <SBUIPresentableHomeGestureContext, SBUIPresentableDismissalPreventionContext, SBUIPresentableGestureRecognizerPriorityContext, SBUIPresentableButtonEventsContext> {
    _SBUIPresentableDismissalPreventionAssertion *_transitionDismissalPreventionAssertion;
    _SBUIPresentableGestureRecognizerPriorityAssertion *_gestureRecognizerPriorityAssertion;
    NSMapTable *_buttonEventsToActions;
}

@property (readonly, nonatomic) BOOL ownsHomeGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (id)acquireGestureRecognizerDefaultPriorityAssertionForReason:(id)a0;
- (id)acquireTransitionDismissalPreventionAssertionForReason:(id)a0;
- (id)acquireAssertionForButtonEvent:(long long)a0 reason:(id)a1;
- (id)initWithScene:(id)a0 presentable:(id)a1;
- (id)_buttonEventsActionForButtonEvent:(long long)a0;
- (void)_removeButtonEventsActionForButtonEvent:(long long)a0;
- (void)_setButtonEventAction:(id)a0 forButtonEvent:(long long)a1;
- (void)setWantsHomeGesture:(BOOL)a0;

@end
