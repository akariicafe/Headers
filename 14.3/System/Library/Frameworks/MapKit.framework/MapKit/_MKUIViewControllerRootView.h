@class UIViewController;

@interface _MKUIViewControllerRootView : UIView

@property (weak, nonatomic) UIViewController *viewController;

- (void)_commonInit;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithViewController:(id)a0;

@end
