@class UIColor;

@interface CoreAudioKit.AUClippingVisualizationView : CoreAudioKit.AUVisualizationView {
    void /* unknown type, empty encoding */ clipShape;
    void /* unknown type, empty encoding */ sineWave;
    void /* unknown type, empty encoding */ midLine;
    void /* unknown type, empty encoding */ clipLines;
    void /* unknown type, empty encoding */ clipAreas;
    void /* unknown type, empty encoding */ clip;
}

@property (nonatomic, retain) UIColor *tintColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
