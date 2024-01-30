@class UIWindow;

@interface DDFallbackController : UIViewController {
    UIWindow *_baseWindow;
    UIWindow *_ourWindow;
    id _interactionDelegate;
}

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldAutorotate;
- (id)initWithWindow:(id)a0 interactionDelegate:(id)a1;

@end
