@class CSRingLayer, UIView, CABackdropLayer, CALayer, SBUILegibilityLabel, CSAccessoryConfiguration;

@interface CSBatteryChargingRingView : CSBatteryChargingView

@property (retain, nonatomic) CSAccessoryConfiguration *configuration;
@property (retain, nonatomic) CABackdropLayer *ringBlurBackdropLayer;
@property (retain, nonatomic) CALayer *chargingBoltGlyph;
@property (retain, nonatomic) CABackdropLayer *backgroundRadiusBackdropLayer;
@property (retain, nonatomic) CABackdropLayer *backgroundBackdropLayer;
@property (retain, nonatomic) CABackdropLayer *averageColorBackdropLayer;
@property (retain, nonatomic) CALayer *ringTempOverlayLayer;
@property (retain, nonatomic) CALayer *splashRing;
@property (retain, nonatomic) CSRingLayer *batteryLevelRing;
@property (retain, nonatomic) CSRingLayer *trackFillRingLayer;
@property (retain, nonatomic) CSRingLayer *ringBlurLayer;
@property (nonatomic) BOOL isBatterySaverModeActive;
@property (retain, nonatomic) SBUILegibilityLabel *chargePercentLabel;
@property (retain, nonatomic) UIView *chargingContainerView;

- (BOOL)_isReduceMotionEnabled;
- (void)setLegibilitySettings:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (BOOL)batteryVisible;
- (void)setBatteryVisible:(BOOL)a0;
- (double)desiredVisibilityDuration;
- (void)setPrimaryBatteryText:(id)a0 forBattery:(id)a1;
- (void)_runAnimationWithType:(unsigned long long)a0;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)_isReduceTransparencyEnabled;
- (BOOL)_isDarkerSystemColorsEnabled;
- (void)_layoutChargePercentLabel;
- (id)_updateChargeString:(id)a0 oldLabel:(id)a1;
- (id)colorForBatteryLevel:(double)a0;
- (void)_runDimAnimation;
- (void)_runSplashRingAnimation;
- (void)_runRingBlurAnimation;
- (void)_runChargingBoltAnimationVisible:(BOOL)a0;
- (void)_runChargingLabelPresentAnimation;
- (void)_runBatteryLevelRingAnimation;
- (void)_runBatteryLevelDismissAnimation;
- (void)_chargingBoltPresentAnimationWithDuration;
- (void)_chargingBoltDismissAnimationWithDuration;
- (id)_chargePercentFont;
- (double)batteryChargingLevel;
- (long long)batteryCount;

@end
