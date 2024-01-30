@interface CoreAudioKit.AULimiterGraphView : UIView {
    void /* unknown type, empty encoding */ levels;
    void /* unknown type, empty encoding */ lines;
    void /* unknown type, empty encoding */ peaks;
}

- (void)layoutSublayersOfLayer:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)addWithLevel:(double)a0;

@end
