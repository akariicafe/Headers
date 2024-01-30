@class UIColor, UIView;

@interface HUQuickControlCircleButton : UIButton

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIColor *standardBackgroundColor;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *selectedColor;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_controlStateChanged;
- (void)_adjustTitleColor;

@end
