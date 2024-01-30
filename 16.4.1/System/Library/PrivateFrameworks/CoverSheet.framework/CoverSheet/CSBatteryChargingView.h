@class CSProminentLayoutController, _UILegibilitySettings;

@interface CSBatteryChargingView : CSCoverSheetViewBase {
    CSProminentLayoutController *_prominentLayoutController;
}

@property (nonatomic) BOOL batteryVisible;
@property (readonly, nonatomic) long long batteryCount;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) double desiredVisibilityDuration;
@property (readonly, nonatomic) double horizontalGapBetweenBatteryAndPercentLabel;
@property (nonatomic) double alignmentPercent;

+ (id)maskImageNameForExternalChargingBattery;
+ (id)batteryChargingRingViewWithConfiguration:(id)a0;
+ (id)horizontalBatteryChargingViewForBatterySize:(struct CGSize { double x0; double x1; })a0 includeBoltImage:(BOOL)a1;
+ (id)maskImageNameForChargingBattery;
+ (id)batteryChargingViewWithDoubleBattery;
+ (id)batteryChargingViewWithSingleBattery;
+ (id)maskImageNameForInternalChargingBattery;

- (double)_batteryHeight;
- (void)setSecondaryBatteryText:(id)a0 forBattery:(id)a1;
- (id)_chargePercentFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPrimaryBatteryText:(id)a0 forBattery:(id)a1;
- (struct CGPoint { double x0; double x1; })_batteryCenter;
- (id)_updateChargeString:(id)a0 oldLabel:(id)a1;
- (struct CGSize { double x0; double x1; })_imageViewScalingCorrectedBatterySize:(struct CGSize { double x0; double x1; })a0;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tightFrameForElement:(unsigned long long)a0;
- (void).cxx_destruct;

@end
