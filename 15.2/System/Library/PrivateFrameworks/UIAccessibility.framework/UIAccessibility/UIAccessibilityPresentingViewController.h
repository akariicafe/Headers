@class UIWindow;

@interface UIAccessibilityPresentingViewController : UIViewController {
    UIWindow *_presentationWindow;
}

- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)dismissViewControllerWithTransition:(int)a0 completion:(id /* block */)a1;
- (void)_voiceOverStatusChanged;
- (void)_cleanUpPresentationWindow;

@end
