@interface _UIPointerEffectTintView : UIVisualEffectView <_UILumaTrackingBackdropViewDelegate> {
    unsigned long long _luminance;
    id /* block */ _tintColorMatrixProvider;
}

@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isPressed) BOOL pressed;

- (void)_updateAlpha;
- (void)backgroundLumaView:(id)a0 didTransitionToLevel:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_updateBackgroundEffects;
- (id)initWithTintColorMatrixProvider:(id /* block */)a0;

@end
