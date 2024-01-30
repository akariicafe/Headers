@interface GameCenterUI.DetailView : UIView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ chevronView;
    void /* unknown type, empty encoding */ accessoryView;
    void /* unknown type, empty encoding */ accessory;
    void /* unknown type, empty encoding */ accessoryAction;
    void /* unknown type, empty encoding */ disabled;
    void /* unknown type, empty encoding */ selectionHandler;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ style;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)wasTapped;
- (void)didTapWithAccessoryView:(id)a0;

@end
