@interface GameCenterUI.GKMultiplayerButtonHeaderView : UIView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ stepper;
    void /* unknown type, empty encoding */ iconView;
    void /* unknown type, empty encoding */ cancelButton;
    void /* unknown type, empty encoding */ cancelButtonHandler;
    void /* unknown type, empty encoding */ backgroundView;
}

@property (nonatomic) BOOL isStepperHidden;
@property (nonatomic) void /* unknown type, empty encoding */ wantsMaterialBackground;
@property (nonatomic) long long minimumValue;
@property (nonatomic) long long maximumValue;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)applyGame:(id)a0;
- (void)updateStepperWithValue:(long long)a0;
- (id)initWithCancelButtonHandler:(id /* block */)a0;
- (id)initWithMinimumValue:(long long)a0 maximumValue:(long long)a1 initialValue:(long long)a2 titleChangedHandler:(id /* block */)a3 valueChangedHandler:(id /* block */)a4 cancelButtonHandler:(id /* block */)a5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)cancelPressed:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
