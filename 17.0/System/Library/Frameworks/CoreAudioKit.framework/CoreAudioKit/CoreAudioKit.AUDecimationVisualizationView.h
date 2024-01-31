@class UIColor;

@interface CoreAudioKit.AUDecimationVisualizationView : CoreAudioKit.AUVisualizationView {
    void /* unknown type, empty encoding */ decimationShape;
    void /* unknown type, empty encoding */ sineShape;
    void /* unknown type, empty encoding */ midLine;
    void /* unknown type, empty encoding */ decimation;
    void /* unknown type, empty encoding */ rounding;
}

@property (nonatomic, retain) UIColor *tintColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
