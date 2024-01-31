@class UIColor;

@interface CoreAudioKit.AUOverdriveVisualizationView : CoreAudioKit.AUVisualizationView {
    void /* unknown type, empty encoding */ overdriveShape;
    void /* unknown type, empty encoding */ linear;
    void /* unknown type, empty encoding */ square;
    void /* unknown type, empty encoding */ cubic;
}

@property (nonatomic, retain) UIColor *tintColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
