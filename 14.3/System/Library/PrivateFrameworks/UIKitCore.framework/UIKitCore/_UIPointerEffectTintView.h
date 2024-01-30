@interface _UIPointerEffectTintView : UIVisualEffectView <_UILumaTrackingBackdropViewDelegate> {
    unsigned long long _luminance;
}

@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isPressed) BOOL pressed;

- (void)_updateAlpha;
- (void)backgroundLumaView:(id)a0 didTransitionToLevel:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateBackgroundEffects;

@end
