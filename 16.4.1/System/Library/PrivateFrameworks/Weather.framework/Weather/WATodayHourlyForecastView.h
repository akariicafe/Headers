@class NSArray, UIVisualEffectView, UIImageView, UILabel, UIImage, NSAttributedString;

@interface WATodayHourlyForecastView : UIView

@property (retain, nonatomic) UIVisualEffectView *temperatureLabelVisualEffectView;
@property (retain, nonatomic) UIVisualEffectView *timeLabelVisualEffectView;
@property (retain, nonatomic) UILabel *temperatureLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *conditionsImageView;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UIImage *conditionsImage;
@property (copy, nonatomic) NSAttributedString *temperature;
@property (copy, nonatomic) NSAttributedString *time;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)applyVibrancyToTimeWithEffect:(id)a0;

@end
