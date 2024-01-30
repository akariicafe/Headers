@class HUQuickControlRoundButton, HUIconView, HUQuickControlPushButtonViewProfile, NSString, UIImpactFeedbackGenerator, UILabel, UILongPressGestureRecognizer;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlPushButtonView : UIView <HUQuickControlInteractiveView>

@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) HUQuickControlRoundButton *roundButton;
@property (retain, nonatomic) HUIconView *decorationIconView;
@property (retain, nonatomic) UILabel *buttonLabel;
@property (nonatomic) unsigned long long controlState;
@property (copy, nonatomic) HUQuickControlPushButtonViewProfile *profile;
@property (copy, nonatomic) NSString *descriptionText;
@property (weak, nonatomic) id<HUQuickControlViewInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithProfile:(id)a0;
- (void)layoutSubviews;
- (void)handleTap:(id)a0;
- (void)_updateUI;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;
- (void)_updateUIForReachabilityState:(unsigned long long)a0;
- (void)_prepareForTapticFeedback;
- (void)_animateToEnlargeView;
- (void)_actuateTapticFeedbackWithIntensity:(double)a0;
- (void)_animateToShrinkView;
- (void)_updateDecorationIconDescriptorAnimated:(BOOL)a0;

@end
