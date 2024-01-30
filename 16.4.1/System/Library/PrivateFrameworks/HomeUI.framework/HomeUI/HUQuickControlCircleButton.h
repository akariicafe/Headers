@class UIColor, UIView;

@interface HUQuickControlCircleButton : UIButton

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIColor *standardBackgroundColor;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *selectedColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)_adjustTitleColor;
- (void)_controlStateChanged;

@end
