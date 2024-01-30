@class LinearGaugeView;

@interface NWCDailyForecastUltravioletIndexView : NWCDailyForecastView

@property (readonly, nonatomic) LinearGaugeView *backgroundLinearGaugeView;

- (void).cxx_destruct;
- (void)applyFilter:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
