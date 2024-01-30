@class UIColor;

@interface HUQuickControlMagnifierView : UIView

@property (nonatomic) double innerRadius;
@property (retain, nonatomic) UIColor *selectedColor;

- (double)_outlineWidth;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
