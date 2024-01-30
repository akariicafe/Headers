@class LinearGaugeView, UILabel;

@interface NWCDailyForecastView : UIView

@property (nonatomic) double percentage;
@property (readonly, nonatomic) LinearGaugeView *linearGaugeView;
@property (readonly, nonatomic) UILabel *weekdayLabel;

- (void).cxx_destruct;
- (void)applyFilter:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateMonochromeColor:(id)a0 fraction:(double)a1;
- (void)_applyLayoutConstraints:(struct { double x0; double x1; double x2; double x3; })a0;

@end
