@class UIViewController;

@interface STIOSAlertPresenter : NSObject <STAlertPresenter>

@property (readonly) UIViewController *presentingViewController;

- (id)initWithPresentingViewController:(id)a0;
- (void).cxx_destruct;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 completion:(id /* block */)a2;

@end
