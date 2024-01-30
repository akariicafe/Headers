@class HACCBatteryView;

@interface HACCBatteryGroupView : UIView

@property (retain, nonatomic) HACCBatteryView *topBatteryView;
@property (retain, nonatomic) HACCBatteryView *bottomBatteryView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)updateValueForDevice:(id)a0;
- (void)updateValueForLeft:(double)a0 right:(double)a1 andAvailableEars:(int)a2;

@end
