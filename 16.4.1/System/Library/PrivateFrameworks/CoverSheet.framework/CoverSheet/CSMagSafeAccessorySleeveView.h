@class BCBatteryDevice, UIImageView, SBFLockScreenDateView, CALayer, CSBatteryChargingView;

@interface CSMagSafeAccessorySleeveView : CSMagSafeAccessoryView

@property (retain, nonatomic) CALayer *backgroundColorLayer;
@property (retain, nonatomic) CSBatteryChargingView *batteryChargingView;
@property (retain, nonatomic) UIImageView *chargingBoltImageView;
@property (retain, nonatomic) BCBatteryDevice *batteryDevice;
@property (retain, nonatomic) SBFLockScreenDateView *dateView;
@property (retain, nonatomic) SBFLockScreenDateView *secondaryDateView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleWindowFrame;
@property (nonatomic) BOOL charging;

- (void)setLegibilitySettings:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)layoutSubviews;
- (void)_runAnimationWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_dismissAnimation;
- (void)updateDateViews;
- (id)_batteryChargingViewWithChargingInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_chargingViewFrame;
- (void)_presentAnimation;
- (double)animationDurationBeforeDismissal;
- (void)transitionChargingViewVisible:(BOOL)a0 chargingInfo:(id)a1;

@end
