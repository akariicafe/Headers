@class NSString, UIVisualEffectView, UIImageView, UILabel, UIImage;

@interface WATodayHeaderView : UIView

@property (retain, nonatomic) UIVisualEffectView *weatherInformationVisualEffectView;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UILabel *conditionsLabel1;
@property (retain, nonatomic) UILabel *conditionsLabel2;
@property (retain, nonatomic) UIImageView *conditionsImageView;
@property (retain, nonatomic) UILabel *temperatureLabel;
@property (retain, nonatomic) UILabel *temperatureHighLowLabel;
@property (nonatomic) double pageFontSize;
@property (nonatomic) double pageDegreeFontSize;
@property (nonatomic) double pageBaselineOffset;
@property (copy, nonatomic) NSString *conditionsLine1;
@property (copy, nonatomic) NSString *conditionsLine2;
@property (copy, nonatomic) UIImage *conditionsImage;
@property (copy, nonatomic) NSString *temperature;
@property (copy, nonatomic) NSString *temperatureHigh;
@property (copy, nonatomic) NSString *temperatureLow;
@property (copy, nonatomic) NSString *locationName;

+ (BOOL)requiresConstraintBasedLayout;

- (void)_updateContent;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (id)init;
- (void)_setupSubviews;

@end
