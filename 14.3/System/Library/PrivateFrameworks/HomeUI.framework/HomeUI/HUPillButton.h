@class UIColor, NAUILayoutConstraintSet, NSString, UIFont, UIView, UILabel;

@interface HUPillButton : UIButton

@property (class, readonly, nonatomic) struct { double x0; double x1; double x2; double x3; double x4; } defaultMetrics;

@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) unsigned long long cornerRadiusStyle;
@property (readonly, nonatomic) NAUILayoutConstraintSet *constraintSet;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UILabel *buttonLabel;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UIColor *buttonTextColor;
@property (retain, nonatomic) UIFont *buttonFont;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) struct { double topToLabelBaselineDistance; double labelBaselineToBottomDistance; double minHorizontalPadding; double minWidth; double heightReduction; } metrics;

+ (BOOL)requiresConstraintBasedLayout;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)tintColorDidChange;
- (void)_didTap:(id)a0;
- (void).cxx_destruct;
- (BOOL)adjustsFontSizeToFitWidth;
- (void)updateConstraints;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setButtonText:(id)a0;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)a0;
- (void)didMoveToSuperview;
- (id)description;
- (void)layoutSubviews;
- (id)buttonText;
- (id)initWithBackgroundStyle:(unsigned long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_setupConstraintSet;
- (id)initWithBackgroundStyle:(unsigned long long)a0 cornerRadiusStyle:(unsigned long long)a1;

@end
