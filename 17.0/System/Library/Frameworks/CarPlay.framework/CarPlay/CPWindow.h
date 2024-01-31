@class UIWindowScene, UILayoutGuide, NSLayoutConstraint, CPTemplateApplicationScene;

@interface CPWindow : UIWindow

@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *rightConstraint;
@property (readonly, nonatomic) UILayoutGuide *mapButtonSafeAreaLayoutGuide;
@property (weak, nonatomic) UIWindowScene *windowScene;
@property (weak, nonatomic) CPTemplateApplicationScene *templateApplicationScene;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 templateScene:(id)a1;
- (void)updateLayoutGuideWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
