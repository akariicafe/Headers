@class UIWindow;

@interface DDFallbackController : UIViewController {
    UIWindow *_baseWindow;
    UIWindow *_ourWindow;
    id _interactionDelegate;
}

- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (id)initWithWindow:(id)a0 interactionDelegate:(id)a1;

@end
