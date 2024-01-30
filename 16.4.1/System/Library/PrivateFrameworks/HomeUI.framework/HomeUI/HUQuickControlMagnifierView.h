@class UIColor;

@interface HUQuickControlMagnifierView : UIView

@property (nonatomic) double innerRadius;
@property (retain, nonatomic) UIColor *selectedColor;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (double)_outlineWidth;

@end
