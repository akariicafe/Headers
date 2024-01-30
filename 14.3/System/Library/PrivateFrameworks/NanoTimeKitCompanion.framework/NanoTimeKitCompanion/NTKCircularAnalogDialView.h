@class NSArray, NTKWhistlerAnalogColorPalette, CALayer, CLKDevice;

@interface NTKCircularAnalogDialView : UIView {
    CLKDevice *_device;
    unsigned long long _numberOfTicks;
    CALayer *_dialBackgroundLayer;
    CALayer *_ticksLayer;
    NSArray *_allSmallTicks;
    NSArray *_allHourTicks;
    NSArray *_smallMatchingHourTicks;
    double _tickPadding;
    NTKWhistlerAnalogColorPalette *_colorPalette;
    struct { BOOL smallTicksMatchingMinutes; BOOL hideHourTicks; struct CGSize { double width; double height; } hourTickSize; struct CGSize { double width; double height; } smallTickSize; } _options;
}

+ (id)_disabledLayerActions;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cleanupAfterZoom;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (void)prepareForEdit;
- (void)cleanupAfterEdit;
- (void)prepareForZoom;
- (void)transitTicksWithInitialBezelTextWidthInRadius:(double)a0 finalBezelTextWidthInRadius:(double)a1 fraction:(double)a2;
- (void)applyZoomFraction:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(struct { BOOL x0; BOOL x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; })a1 device:(id)a2;
- (void)showAllTicksInDial;
- (void)applyColorTransitionFraction:(double)a0 fromColorPalette:(id)a1 toColorPalette:(id)a2;
- (void)transitInvisibleTicksAlphaWithBezelTextWidthInRadius:(double)a0 invisbleTicksAlpha:(double)a1;
- (void)applyColorTransitionFraction:(double)a0 fromColor:(unsigned long long)a1 toColor:(unsigned long long)a2;
- (void)_toggleRasterization:(BOOL)a0;
- (double)_tickOpactiyAtIndex:(long long)a0 bezelTextWidthInRadius:(double)a1 invisibleTicksAlpha:(double)a2;
- (id)_instantaneousAnimationForKeyPath:(id)a0 value:(id)a1;
- (void)fillDialTransitionWithFraction:(double)a0 bezelTextWidthRadians:(double)a1;
- (BOOL)isTickIndexForHour:(unsigned long long)a0;
- (void)layoutLayerTicks:(id)a0 rotationAngleInDegree:(double)a1 smallTicks:(BOOL)a2;
- (double)_tickOpactiyAtIndex:(long long)a0 bezelTextWidthInRadius:(double)a1 invisibleTicksAlpha:(double)a2 visibleTicksAlpha:(double)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1 smallTicksMatchingMinutes:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1 hideHourTicks:(BOOL)a2;
- (void)setDialBackgroundColor:(id)a0;
- (void)setHideHourTicks:(BOOL)a0;
- (void)setHourTicksOpacity:(double)a0 bezelTextWidthRadians:(double)a1;

@end
