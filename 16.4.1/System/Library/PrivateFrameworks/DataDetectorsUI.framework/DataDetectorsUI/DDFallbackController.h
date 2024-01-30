@class UIWindow;

@interface DDFallbackController : UIViewController {
    UIWindow *_baseWindow;
    UIWindow *_ourWindow;
    id _interactionDelegate;
}

- (BOOL)shouldAutorotate;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithWindow:(id)a0 interactionDelegate:(id)a1;

@end
