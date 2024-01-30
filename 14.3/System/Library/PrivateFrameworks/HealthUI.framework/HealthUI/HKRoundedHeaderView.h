@class UIColor, NSString, NSArray, UIImage, UIImageView, HKGradientView, NSLayoutConstraint, HKGradient, UILabel;

@interface HKRoundedHeaderView : UIView

@property (retain, nonatomic) HKGradientView *gradientView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *detailTextLabel;
@property (retain, nonatomic) UIImageView *chevronRightImageView;
@property (readonly, nonatomic) BOOL isInteractive;
@property (retain, nonatomic) NSLayoutConstraint *textLeadingConstraintToView;
@property (retain, nonatomic) NSLayoutConstraint *textLeadingConstraintToImageView;
@property (retain, nonatomic) NSLayoutConstraint *textLabelFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textLabelWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textLabelBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *detailTextLabelFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *detailTextLabelWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *detailTextLabelBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *largeTextChevronCenterYConstraint;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *largeTextConstraints;
@property (retain, nonatomic) HKGradient *gradient;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *chevronColor;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIColor *detailTextColor;
@property (nonatomic) NSString *detailTextCompositingFilter;
@property (readonly, nonatomic) double textHorizontalInset;

+ (id)_textFont;
+ (double)estimatedHeight;
+ (double)_topToTextFirstBaseline;
+ (double)_textLastBaselineToBottom;
+ (id)_detailTextFont;
+ (double)_detailTextLastBaselineToBottom;
+ (id)_accessibilityContentSizeCategory;

- (id)initWithColor:(id)a0;
- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (id)initWithGradient:(id)a0;
- (void)_setupUI;
- (void)_updateUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupConstraints;
- (id)initWithColor:(id)a0 isInteractive:(BOOL)a1;
- (void)_updateTextConstraints;
- (void)_updateTextLabel;
- (double)_headerViewWidth;
- (BOOL)_isLayingOutForAccessibility;
- (BOOL)_isTextLabelTruncated;

@end
