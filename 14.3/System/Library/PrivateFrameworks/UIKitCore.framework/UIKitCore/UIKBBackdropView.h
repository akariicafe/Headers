@class UIImage;

@interface UIKBBackdropView : UIVisualEffectView

@property (retain, nonatomic) UIImage *imageForCorners;

- (int)textEffectsVisibilityLevel;
- (void)transitionToStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)dealloc;
- (void)_setRenderConfig:(id)a0;
- (id)_generateCornerContentsImage:(unsigned long long)a0;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCorners:(unsigned long long)a1;
- (BOOL)_applyCornerMaskToSelf;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
