@class UIFont, NSString, UIColor, UILabel, UIView, UIButton;

@interface FIUIWorkoutSummaryColoredDetailTableViewCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_secondTitleLabel;
    UILabel *_secondDetailLabel;
    UILabel *_noDataLabel;
    UIFont *_detailFont;
    UIFont *_suffixFont;
    UIView *_dividerView;
    NSString *_detailString;
    NSString *_suffixString;
    UIColor *_textColor;
    BOOL _shouldForceLTRForDetailString;
}

@property (retain, nonatomic) UIView *optionalButtonView;
@property (nonatomic) BOOL showBackgroundButton;
@property (retain, nonatomic) UIButton *customAccessoryButton;

+ (double)rowHeightWithNoDataString:(id)a0;
+ (double)rowHeightWithSecondMetric;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setTitleString:(id)a0;
- (void)_setupUI;
- (void)_resizeFontsIfNeededToFitWidth:(double)a0;
- (void)_setDefaultValueFontSizes;
- (void)setDetailString:(id)a0 suffixString:(id)a1 textColor:(id)a2 shouldForceLTRForDetailString:(BOOL)a3;
- (void)setLineHidden:(BOOL)a0;
- (void)setNoDataString:(id)a0 textColor:(id)a1;
- (void)setSecondMetricTitle:(id)a0 detailString:(id)a1 detailColor:(id)a2;

@end
