@interface GameCenterUI.RoundedTitledButton : GameCenterUI.DynamicTypeButton {
    void /* unknown type, empty encoding */ height;
    void /* unknown type, empty encoding */ tapHandler;
}

- (void).cxx_destruct;
- (void)didTapButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
