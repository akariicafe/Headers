@class _UIBackdropView, UIImageView, CSBatteryFillView, UIView, SBUILegibilityLabel;

@interface _CSDoubleBatteryChargingView : CSBatteryChargingView {
    UIView *_batteryContainerView;
    UIView *_internalBatteryContainerView;
    UIView *_externalBatteryContainerView;
    _UIBackdropView *_internalBatteryBlurView;
    _UIBackdropView *_externalBatteryBlurView;
    CSBatteryFillView *_internalBatteryFillView;
    CSBatteryFillView *_externalBatteryFillView;
    SBUILegibilityLabel *_internalChargePercentLabel;
    SBUILegibilityLabel *_externalChargePercentLabel;
    SBUILegibilityLabel *_internalChargingNameLabel;
    SBUILegibilityLabel *_externalChargingNameLabel;
    UIImageView *_internalChargingIndicator;
    UIImageView *_externalChargingIndicator;
}

- (BOOL)batteryVisible;
- (void)setLegibilitySettings:(id)a0;
- (double)_batteryTopPadding;
- (double)_spaceBetweenBatteryImages;
- (void)setSecondaryBatteryText:(id)a0 forBattery:(id)a1;
- (double)desiredVisibilityDuration;
- (void)setBatteryVisible:(BOOL)a0;
- (id)_chargePercentFont;
- (long long)batteryCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPrimaryBatteryText:(id)a0 forBattery:(id)a1;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)layoutSubviews;
- (double)_deviceNameBaselineOffset;
- (double)_deviceChargeBaselineOffset;
- (double)_chargingBoltTopOffset;
- (void).cxx_destruct;

@end
