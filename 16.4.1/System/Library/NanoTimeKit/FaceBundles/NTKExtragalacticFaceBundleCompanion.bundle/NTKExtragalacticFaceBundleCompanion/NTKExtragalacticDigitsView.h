@class NSMutableDictionary, CALayer, NTKExtragalacticDigitLoader, CLKDevice;

@interface NTKExtragalacticDigitsView : UIView {
    double _lineWidth;
    CLKDevice *_device;
    NTKExtragalacticDigitLoader *_digitLoader;
    NSMutableDictionary *_digitNumbers;
    CALayer *_fillContainerLayer;
    CALayer *_strokeContainerLayer;
    NSMutableDictionary *_glyphFillLayers;
    NSMutableDictionary *_glyphStrokeLayers;
}

- (void).cxx_destruct;
- (void)_setupShapeLayers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1 digitNumbers:(id)a2;
- (void)setDigitNumbers:(id)a0;

@end
