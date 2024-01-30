@class UIColor, UIVisualEffect, UIVisualEffectView;

@interface CSModalButton : UIButton {
    UIColor *_backgroundColor;
    UIVisualEffectView *_effectView;
    BOOL _isPressed;
}

@property (retain, nonatomic) UIVisualEffect *visualEffect;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)backgroundColor;
- (void)_buttonPressed:(id)a0;
- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)setBackgroundColor:(id)a0;
- (void)_buttonReleased:(id)a0;

@end
