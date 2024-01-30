@class NWKUILinearGaugeView, UILabel, CLKDevice;

@interface NWCDailyForecastView : UIView

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) NWKUILinearGaugeView *linearGaugeView;
@property (readonly, nonatomic) UILabel *weekdayLabel;

+ (void)initialize;

- (id)initWithDevice:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)applyNonAccentFilters:(id)a0 fraction:(double)a1;
- (void)_applyLayoutConstraints:(struct { double x0; double x1; double x2; double x3; })a0;
- (void)applyAccentFilters:(id)a0 fraction:(double)a1;
- (void)updateWithHighlightColor:(id)a0 fraction:(double)a1;

@end
