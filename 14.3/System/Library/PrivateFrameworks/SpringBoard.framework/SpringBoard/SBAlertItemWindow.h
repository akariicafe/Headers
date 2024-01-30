@class SBAlertLayoutPresentationVerifier;

@interface SBAlertItemWindow : SBSecureMainScreenActiveInterfaceOrientationWindow

@property (weak, nonatomic) SBAlertLayoutPresentationVerifier *alertLayoutPresentationVerifier;

- (BOOL)_canBecomeKeyWindow;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithDebugName:(id)a0 alertLayoutPresentationVerifier:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
