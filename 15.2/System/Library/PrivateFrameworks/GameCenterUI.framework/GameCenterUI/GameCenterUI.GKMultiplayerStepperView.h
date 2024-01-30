@class UIButton;

@interface GameCenterUI.GKMultiplayerStepperView : UIView {
    void /* unknown type, empty encoding */ downButton;
    void /* unknown type, empty encoding */ upButton;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ isStepperHidden;
}

@property (nonatomic, readonly) UIButton *accessibilityDownButton;
@property (nonatomic, readonly) UIButton *accessibilityUpButton;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)didTapDown:(id)a0;
- (void)didTapUp:(id)a0;
- (void)accessibilityUpdateStepperWithValue:(long long)a0;

@end
