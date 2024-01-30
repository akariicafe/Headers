@class WFGradient, NSString, WFFloatingView, UIView;

@interface WFColorCell : UICollectionViewCell

@property (readonly, nonatomic) WFFloatingView *floatingView;
@property (weak, nonatomic) UIView *selectedRingView;
@property (retain, nonatomic) WFGradient *gradient;
@property (copy, nonatomic) NSString *colorName;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)accessibilityTraits;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;

@end
