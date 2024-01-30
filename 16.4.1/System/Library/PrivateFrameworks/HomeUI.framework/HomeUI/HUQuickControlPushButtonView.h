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

- (void)_contentSizeCategoryDidChange;
- (id)initWithProfile:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateUI;
- (void)handleTap:(id)a0;
- (void)_actuateTapticFeedbackWithIntensity:(double)a0;
- (void)_animateToEnlargeView;
- (void)_animateToShrinkView;
- (void)_prepareForTapticFeedback;
- (void)_updateDecorationIconDescriptorAnimated:(BOOL)a0;
- (void)_updateUIForReachabilityState:(unsigned long long)a0;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;

@end
