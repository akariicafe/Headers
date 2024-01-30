@interface _UIPointerEffectTintView : UIVisualEffectView <_UILumaTrackingBackdropViewDelegate> {
    unsigned long long _luminance;
    id /* block */ _tintColorMatrixProvider;
    BOOL _shouldAdjustIntensityOnPress;
}

@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isPressed) BOOL pressed;

- (void)_updateAlpha;
- (id)initWithTintColorMatrixProvider:(id /* block */)a0;
- (void).cxx_destruct;
- (void)backgroundLumaView:(id)a0 didTransitionToLevel:(unsigned long long)a1;
- (void)_updateBackgroundEffects;

@end
