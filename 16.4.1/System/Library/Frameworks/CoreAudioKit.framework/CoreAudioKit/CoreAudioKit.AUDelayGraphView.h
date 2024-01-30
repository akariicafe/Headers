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
}

@property (nonatomic) void /* unknown type, empty encoding */ invert;
@property (nonatomic, retain) void /* unknown type, empty encoding */ dataSource;
@property (nonatomic) void /* unknown type, empty encoding */ zoomFactor;

- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (void)configureWithData:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })graphFrame;
- (void)updateFor:(unsigned int)a0 value:(float)a1;

@end
