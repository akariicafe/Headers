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
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (void)_didTap:(id)a0;
- (void)didMoveToSuperview;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)adjustsFontSizeToFitWidth;
- (id)description;
- (id)initWithBackgroundStyle:(unsigned long long)a0;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)setButtonText:(id)a0;
- (id)buttonText;
- (void)tintColorDidChange;
- (void)_setupConstraintSet;
- (id)initWithBackgroundStyle:(unsigned long long)a0 cornerRadiusStyle:(unsigned long long)a1;

@end
