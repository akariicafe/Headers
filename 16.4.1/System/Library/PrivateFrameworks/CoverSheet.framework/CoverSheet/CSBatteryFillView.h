@interface CSBatteryFillView : UIView {
    long long _chargePercentage;
    long long _lowBatteryLevel;
    BOOL _isBatterySaverModeActive;
    BOOL _isInternalBattery;
}

- (void)setBatterySaverModeActive:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setChargePercentage:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isInternalBattery:(BOOL)a1 lowBatteryLevel:(long long)a2;

@end
