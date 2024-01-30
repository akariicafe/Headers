@class UIColor, NSArray, CALayer, CLKDevice;

@interface NTKColorAnalogBackgroundView : UIView {
    CALayer *_tickContainerLayer;
    NSArray *_tickLayers;
    CALayer *_circleLayer;
    CALayer *_fullscreenLayer;
    CLKDevice *_device;
    UIColor *_color;
    unsigned long long _style;
}

- (void).cxx_destruct;
- (void)applyStyle:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1;
- (void)applyColor:(id)a0;
- (void)applyTransitionFraction:(double)a0 fromStyle:(unsigned long long)a1 toStyle:(unsigned long long)a2;
- (void)cleanupAfterZoom;
- (void)applyTransitionFraction:(double)a0 fromScheme:(id)a1 toScheme:(id)a2;
- (void)applyZoomFraction:(double)a0;
- (void)updateLayerVisibilityForStyles:(id)a0;

@end
