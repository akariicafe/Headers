@class _UILegibilitySettings;

@interface CSBatteryChargingView : CSCoverSheetViewBase

@property (nonatomic) BOOL batteryVisible;
@property (readonly, nonatomic) long long batteryCount;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) double desiredVisibilityDuration;
@property (readonly, nonatomic) double horizontalGapBetweenBatteryAndPercentLabel;
@property (nonatomic) double alignmentPercent;

+ (id)batteryChargingViewWithSingleBattery;
+ (id)batteryChargingViewWithDoubleBattery;
+ (id)horizontalBatteryChargingViewForBatterySize:(struct CGSize { double x0; double x1; })a0 includeBoltImage:(BOOL)a1;
+ (id)batteryChargingRingViewWithConfiguration:(id)a0;
+ (id)maskImageNameForChargingBattery;
+ (id)maskImageNameForInternalChargingBattery;
+ (id)maskImageNameForExternalChargingBattery;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPrimaryBatteryText:(id)a0 forBattery:(id)a1;
- (void)setSecondaryBatteryText:(id)a0 forBattery:(id)a1;
- (void)performAnimation:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)_updateChargeString:(id)a0 oldLabel:(id)a1;
- (id)_chargePercentFont;
- (double)_batteryOriginYForBatteryHeight:(double)a0;

@end
