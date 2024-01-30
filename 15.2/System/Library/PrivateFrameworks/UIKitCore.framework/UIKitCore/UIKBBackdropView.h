@class UIImage;

@interface UIKBBackdropView : UIVisualEffectView

@property (retain, nonatomic) UIImage *imageForCorners;

- (void)_setRenderConfig:(id)a0;
- (void)transitionToStyle:(long long)a0;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCorners:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)_generateCornerContentsImage:(unsigned long long)a0;
- (BOOL)_applyCornerMaskToSelf;
- (int)textEffectsVisibilityLevel;
- (void)updateCorners:(unsigned long long)a0;
- (void)dealloc;

@end
