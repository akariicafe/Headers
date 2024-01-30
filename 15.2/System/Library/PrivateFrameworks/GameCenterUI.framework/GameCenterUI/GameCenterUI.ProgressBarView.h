@interface GameCenterUI.ProgressBarView : UIView {
    void /* unknown type, empty encoding */ textLabel;
    void /* unknown type, empty encoding */ percentComplete;
    void /* unknown type, empty encoding */ textPosition;
    void /* unknown type, empty encoding */ progressFillView;
    void /* unknown type, empty encoding */ progressTrackView;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
