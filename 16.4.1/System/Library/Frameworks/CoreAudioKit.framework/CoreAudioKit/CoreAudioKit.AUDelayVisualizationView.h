@class UIColor;

@interface CoreAudioKit.AUDelayVisualizationView : CoreAudioKit.AUVisualizationView {
    void /* unknown type, empty encoding */ delayLayers;
    void /* unknown type, empty encoding */ xMax;
    void /* unknown type, empty encoding */ yMax;
    void /* unknown type, empty encoding */ xValue;
    void /* unknown type, empty encoding */ yValue;
}

@property (nonatomic, retain) UIColor *tintColor;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
