@interface CoreAudioKit.AUDelayGraphView : CoreAudioKit.CAAUGraphView {
    void /* unknown type, empty encoding */ pointLayer;
    void /* unknown type, empty encoding */ delayLayers;
    void /* unknown type, empty encoding */ defaultMax;
    void /* unknown type, empty encoding */ xMinorGridCount;
    void /* unknown type, empty encoding */ graphActivated;
    void /* unknown type, empty encoding */ accessibilityParam;
    void /* unknown type, empty encoding */ accessibilityTimeFormatter;
    void /* unknown type, empty encoding */ accessibilityDecimalFormatter;
    void /* unknown type, empty encoding */ xMinorGrids;
    void /* unknown type, empty encoding */ invert;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ zoomFactor;
}

- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)accessibilityActivate;

@end
