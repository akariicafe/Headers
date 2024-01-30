@class UIFont, NSArray, UIColor, NSString, UILabel, UIView;

@interface HUMonogramView : UIView

@property (readonly, nonatomic) UILabel *monogramLabel;
@property (readonly, nonatomic) UIView *backgroundView;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL needsComputeLayoutMetrics;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } bubbleEdgeOutsets;
@property (copy, nonatomic) NSArray *labelLayoutConstraints;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *monogramString;

+ (unsigned long long)desiredStyleForString:(id)a0;

- (void)setFont:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)setContentCompressionResistancePriority:(float)a0 forAxis:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentHuggingPriority:(float)a0 forAxis:(long long)a1;
- (id)backgroundColor;
- (void).cxx_destruct;
- (void)setTextColor:(id)a0;
- (id)font;
- (void)setBackgroundColor:(id)a0;
- (id)textColor;
- (void)setMonogramString:(id)a0;
- (void)_setupBackgroundView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupMonogramLabel:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsComputeLayoutMetrics;
- (void)_computeLayoutMetrics;
- (id)monogramString;

@end
