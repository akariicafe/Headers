@class CKGradientReferenceView;

@interface CKSendAnimationWindow : UIAutoRotatingWindow

@property (retain, nonatomic) CKGradientReferenceView *gradientReferenceView;

- (BOOL)_canAffectStatusBarAppearance;
- (id)initWithWindowScene:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
