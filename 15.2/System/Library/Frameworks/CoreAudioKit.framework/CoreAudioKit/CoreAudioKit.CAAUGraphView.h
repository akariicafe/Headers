@interface CoreAudioKit.CAAUGraphView : UIView {
    void /* unknown type, empty encoding */ fill;
    void /* unknown type, empty encoding */ border;
    void /* unknown type, empty encoding */ gridPoint;
    void /* unknown type, empty encoding */ gridPointSelected;
    void /* unknown type, empty encoding */ gridPointHighlighted;
    void /* unknown type, empty encoding */ guide;
    void /* unknown type, empty encoding */ guideHighlight;
    void /* unknown type, empty encoding */ widthAreaFill;
    void /* unknown type, empty encoding */ offsetXLabels;
    void /* unknown type, empty encoding */ margins;
    void /* unknown type, empty encoding */ labelGap;
    void /* unknown type, empty encoding */ activeWidth;
    void /* unknown type, empty encoding */ xAxis;
    void /* unknown type, empty encoding */ yAxis;
    void /* unknown type, empty encoding */ graphLayer;
    void /* unknown type, empty encoding */ xLabels;
    void /* unknown type, empty encoding */ yLabels;
    void /* unknown type, empty encoding */ xGrids;
    void /* unknown type, empty encoding */ yGrids;
    void /* unknown type, empty encoding */ inactiveAreas;
    void /* unknown type, empty encoding */ editPoint;
    void /* unknown type, empty encoding */ touchDown;
    void /* unknown type, empty encoding */ areasHidden;
}

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)data;
- (void)configureWithData:(id)a0;
- (double)locationForXWithValue:(float)a0;
- (double)locationForYWithValue:(float)a0;

@end
