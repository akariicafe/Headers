@class UILabel, UIImageView;
@protocol NWMDataFormatter;

@interface NWCHourlyForecastView : UIView

@property (readonly, nonatomic) UILabel *topLabel;
@property (readonly, nonatomic) UIImageView *middleImageView;
@property (readonly, nonatomic) UILabel *middleLabel;
@property (readonly, nonatomic) UILabel *timeLabel;
@property (weak, nonatomic) id<NWMDataFormatter> formatter;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyStyle;
- (void).cxx_destruct;
- (void)_applyConstraintsWithConstants:(struct { double x0; double x1; double x2; double x3; })a0;
- (void)applyEntryModel:(id)a0 date:(id)a1 timeZone:(id)a2;

@end
