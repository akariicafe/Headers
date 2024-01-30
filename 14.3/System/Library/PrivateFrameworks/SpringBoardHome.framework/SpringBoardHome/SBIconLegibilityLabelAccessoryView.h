@class UIImageView;

@interface SBIconLegibilityLabelAccessoryView : SBIconLabelAccessoryView

@property (readonly, nonatomic) UIImageView *iconImageView;

- (void).cxx_destruct;
- (double)baselineOffsetFromBottom;
- (void)updateWithBaseImage:(id)a0 legibilitySettings:(id)a1;
- (void)addInvertingFilter;
- (void)removeInvertingFilter;
- (id)firstBaselineAnchor;
- (BOOL)hasBaseline;
- (id)lastBaselineAnchor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
