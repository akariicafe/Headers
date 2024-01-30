@class UILabel, _UIBatteryView, NSNumberFormatter;

@interface HACCBatteryView : UIView {
    UILabel *_sideLabel;
    UILabel *_valueLabel;
    _UIBatteryView *_batteryView;
    NSNumberFormatter *_numberFormatter;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setValue:(double)a0 forEar:(int)a1;

@end
