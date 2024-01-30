@class UILabel, UIImageView, CLKDevice;
@protocol NWMDataFormatter;

@interface NWCHourlyForecastView : UIView

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) UILabel *topLabel;
@property (readonly, nonatomic) UIImageView *middleImageView;
@property (readonly, nonatomic) UILabel *middleLabel;
@property (readonly, nonatomic) UILabel *timeLabel;
@property (weak, nonatomic) id<NWMDataFormatter> formatter;

+ (void)initialize;

- (id)initWithDevice:(id)a0;
- (void)applyStyle;
- (void).cxx_destruct;
- (void)_applyConstraintsWithConstants:(struct { double x0; double x1; double x2; double x3; })a0;
- (void)_applyDate:(id)a0 timeZone:(id)a1;
- (void)applyAccentFilters:(id)a0;
- (void)applyEntryModel:(id)a0 date:(id)a1 timeZone:(id)a2;
- (void)applyNonAccentFilters:(id)a0;
- (void)applySimpleEntryModel:(id)a0;

@end
