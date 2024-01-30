@class UIColor, UIImageView, NSLayoutConstraint, UIView, UILabel;

@interface ICDocCamFilterButton : UIButton

@property (weak, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) NSLayoutConstraint *iconSizeConstraint;
@property (readonly, nonatomic) UIColor *inactiveBackgroundViewColor;
@property (readonly, nonatomic) UIColor *inactiveTextColor;
@property (readonly, nonatomic) UIColor *activeBackgroundViewColor;
@property (nonatomic) short filterType;
@property (nonatomic) double iconSize;
@property (weak, nonatomic) NSLayoutConstraint *labelVerticalSpacingConstraint;
@property (weak, nonatomic) UILabel *filterNameLabel;
@property (weak, nonatomic) UIImageView *filterIconView;

+ (id)filterButtonWithType:(short)a0;

- (double)iconSize;
- (void)setIconSize:(double)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)awakeFromNib;
- (unsigned long long)accessibilityTraits;
- (void)setSelected:(BOOL)a0;
- (id)accessibilityLabel;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)updateForAccessibilityDarkerSystemColors:(id)a0;
- (id)imageForFilterType:(short)a0;

@end
