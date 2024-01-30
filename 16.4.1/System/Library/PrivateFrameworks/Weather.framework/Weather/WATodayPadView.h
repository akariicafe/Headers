@class WALegibilityLabel, NSArray, UIImageView, NSString, UIImage, WATodayPadViewStyle, _UILegibilitySettings;

@interface WATodayPadView : UIView

@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UIImageView *conditionsImageView;
@property (retain, nonatomic) WALegibilityLabel *temperatureLabel;
@property (retain, nonatomic) WALegibilityLabel *locationLabel;
@property (retain, nonatomic) WALegibilityLabel *conditionsLabel;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (copy, nonatomic) NSString *conditionsLine;
@property (copy, nonatomic) UIImage *conditionsImage;
@property (copy, nonatomic) NSString *temperature;
@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) WATodayPadViewStyle *style;

+ (BOOL)requiresConstraintBasedLayout;

- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (void)updateForChangedSettings:(id)a0;
- (void).cxx_destruct;
- (void)_setupConstraintsForViews;

@end
