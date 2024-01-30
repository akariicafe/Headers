@class CALayer, NSArray, CLKDevice;

@interface NTKSpectrumAnalogDialView : UIView {
    CLKDevice *_device;
    CALayer *_ticksLayer;
    NSArray *_allTicks;
    double _tickPadding;
}

+ (id)_disabledLayerActions;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setColor:(id)a0;
- (void)cleanupAfterZoom;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (void)prepareForEdit;
- (void)cleanupAfterEdit;
- (void)prepareForZoom;
- (void)transitTicksWithInitialBezelTextWidthInRadius:(double)a0 finalBezelTextWidthInRadius:(double)a1 fraction:(double)a2;
- (void)applyZoomFraction:(double)a0;
- (void)showAllTicksInDial;
- (void)transitInvisibleTicksAlphaWithBezelTextWidthInRadius:(double)a0 invisbleTicksAlpha:(double)a1;
- (void)applyColorTransitionFraction:(double)a0 fromColor:(id)a1 toColor:(id)a2;
- (void)_toggleRasterization:(BOOL)a0;
- (double)_tickOpactiyAtIndex:(long long)a0 bezelTextWidthInRadius:(double)a1 invisibleTicksAlpha:(double)a2;
- (id)_instantaneousAnimationForKeyPath:(id)a0 value:(id)a1;
- (void)fillDialTransitionWithFraction:(double)a0 bezelTextWidthRadians:(double)a1;

@end
