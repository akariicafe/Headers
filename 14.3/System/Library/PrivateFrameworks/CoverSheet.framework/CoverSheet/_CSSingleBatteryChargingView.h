@class UIView, UIImage, NSArray, CSBatteryFillView, UIImageView, _UIBackdropView, NSLayoutConstraint, SBUILegibilityLabel;

@interface _CSSingleBatteryChargingView : CSBatteryChargingView {
    UIView *_batteryContainerView;
    _UIBackdropView *_batteryBlurView;
    CSBatteryFillView *_batteryFillView;
    SBUILegibilityLabel *_chargePercentLabel;
    NSArray *_batteryConstraints;
    NSLayoutConstraint *_batteryTopOffset;
    UIImage *_batteryImage;
    UIImage *_boltImage;
    UIImageView *_boltImageView;
}

@property (nonatomic) struct CGSize { double width; double height; } batterySize;
@property (nonatomic) BOOL horizontalLayoutNeeded;
@property (nonatomic) BOOL includesBoltImage;

- (void)setLegibilitySettings:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)batteryVisible;
- (void)setBatteryVisible:(BOOL)a0;
- (double)desiredVisibilityDuration;
- (void)setPrimaryBatteryText:(id)a0 forBattery:(id)a1;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_layoutChargePercentLabel;
- (id)_chargePercentFont;
- (long long)batteryCount;
- (void)_layoutBattery;
- (double)_batteryNoseOffset;

@end
