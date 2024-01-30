@class HACCBatteryView;

@interface HACCBatteryGroupView : UIView

@property (retain, nonatomic) HACCBatteryView *topBatteryView;
@property (retain, nonatomic) HACCBatteryView *bottomBatteryView;

- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateValueForLeft:(double)a0 right:(double)a1 andAvailableEars:(int)a2;
- (void)updateValueForDevice:(id)a0;

@end
