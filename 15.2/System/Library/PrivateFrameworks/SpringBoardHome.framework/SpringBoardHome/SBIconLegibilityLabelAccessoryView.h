@class UIImageView;

@interface SBIconLegibilityLabelAccessoryView : SBIconLabelAccessoryView

@property (readonly, nonatomic) UIImageView *iconImageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)baselineOffsetFromBottom;
- (BOOL)hasBaseline;
- (void).cxx_destruct;
- (id)lastBaselineAnchor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)firstBaselineAnchor;
- (void)updateWithLegibilitySettings:(id)a0 labelFont:(id)a1;
- (void)updateWithBaseImage:(id)a0 legibilitySettings:(id)a1;

@end
