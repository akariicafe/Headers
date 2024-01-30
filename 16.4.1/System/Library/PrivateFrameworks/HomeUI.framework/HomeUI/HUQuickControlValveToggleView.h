@class UIColor, HUCircleView, HUIconView, NSString, HUQuickControlViewProfile;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlValveToggleView : UIView <HUQuickControlInteractiveView>

@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (readonly, nonatomic) UIColor *backgroundOnColor;
@property (readonly, nonatomic) UIColor *backgroundOffColor;
@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) HUCircleView *circleView;
@property (nonatomic) BOOL open;
@property (weak, nonatomic) id<HUQuickControlViewInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) id value;
@property (copy, nonatomic) HUQuickControlViewProfile *profile;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)intrinsicSizeDescriptor;

- (void)_handleTap:(id)a0;
- (id)initWithProfile:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)_setupIconView;
- (void)_updateIconDescriptor;
- (void)_updateUIForReachabilityState:(unsigned long long)a0;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;

@end
