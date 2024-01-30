@class WFGradient, NSString, WFFloatingView, UIView;

@interface WFColorCell : UICollectionViewCell

@property (readonly, nonatomic) WFFloatingView *floatingView;
@property (weak, nonatomic) UIView *selectedRingView;
@property (retain, nonatomic) WFGradient *gradient;
@property (copy, nonatomic) NSString *colorName;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)setSelected:(BOOL)a0;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
