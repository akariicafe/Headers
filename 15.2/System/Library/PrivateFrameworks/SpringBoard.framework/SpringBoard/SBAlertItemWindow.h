@class SBAlertLayoutPresentationVerifier;

@interface SBAlertItemWindow : SBSecureMainScreenActiveInterfaceOrientationWindow

@property (weak, nonatomic) SBAlertLayoutPresentationVerifier *alertLayoutPresentationVerifier;

+ (id)_traitsArbiterOrientationActuationRole;

- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_canBecomeKeyWindow;
- (void).cxx_destruct;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithRole:(id)a0 debugName:(id)a1 alertLayoutPresentationVerifier:(id)a2;

@end
