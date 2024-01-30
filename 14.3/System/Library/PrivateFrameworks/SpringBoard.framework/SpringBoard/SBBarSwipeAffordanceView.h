@class SBHomeGestureInteraction, NSString, SBSystemGestureManager, SBKeyboardHomeAffordanceAssertion, NSHashTable, SBHomeGrabberView, UINotificationFeedbackGenerator;
@protocol SBHomeGrabberPointerClickDelegate, SBBarSwipeAffordanceDelegate;

@interface SBBarSwipeAffordanceView : UIView <UIGestureRecognizerDelegate, SBHomeGrabberDelegate, SBSystemGestureRecognizerDelegate, SBHomeGestureInteractionDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate> {
    NSHashTable *_observers;
    UINotificationFeedbackGenerator *_dismissalFeedbackGenerator;
    double _additionalEdgeSpacing;
    SBHomeGestureInteraction *_homeGestureInteraction;
    SBSystemGestureManager *_gestureManager;
}

@property (readonly, nonatomic) SBHomeGrabberView *grabberView;
@property (nonatomic) long long feedbackType;
@property (weak, nonatomic) id<SBBarSwipeAffordanceDelegate> delegate;
@property (weak, nonatomic) id<SBHomeGrabberPointerClickDelegate> pointerClickDelegate;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) long long colorBias;
@property (nonatomic, getter=isHomeAffordanceHidden) BOOL homeAffordanceHidden;
@property (retain, nonatomic) SBKeyboardHomeAffordanceAssertion *keyboardHomeAffordanceAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_deactivate;
- (void)homeGestureInteractionEnded:(id)a0;
- (void)_settleGrabber;
- (void)setColorBias:(long long)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)_hideHomeAffordanceAnimationSettings;
- (unsigned long long)homeGestureInteraction:(id)a0 systemGestureTypeForType:(long long)a1;
- (void)didAddSubview:(id)a0;
- (void)addObserver:(id)a0;
- (void)_runBlockOnObservers:(id /* block */)a0;
- (id)_unhideHomeAffordanceAnimationSettings;
- (void)_activate;
- (BOOL)shouldAllowAutoHideForHomeGrabberView:(id)a0;
- (id)_settleAffordanceAnimationBehaviorDescription;
- (void)homeGestureInteractionBegan:(id)a0;
- (void)_offsetGrabberForProgress:(double)a0;
- (void)layoutSubviews;
- (void)_setGrabberAdditionalEdgeSpacing:(double)a0;
- (long long)colorBias;
- (long long)_effectiveOrientationAccountingForTransforms;
- (id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)homeGestureInteractionChanged:(id)a0;
- (void)_updateHomeAffordanceVisibility;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 systemGestureManager:(id)a1 enableGestures:(BOOL)a2;
- (double)_progressWithTranslation:(struct CGPoint { double x0; double x1; })a0 liftoffVelocity:(struct CGPoint { double x0; double x1; })a1;
- (long long)touchInterfaceOrientationForGestureRecognizer:(id)a0;
- (BOOL)shouldAllowThinStyleForHomeGrabberView:(id)a0;
- (void)homeGestureInteractionCancelled:(id)a0;
- (void)_createFeedbackGenerator;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)a0;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)_fireAction;

@end
