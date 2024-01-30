@class UIWindow;

@interface UIAccessibilityPresentingViewController : UIViewController {
    UIWindow *_presentationWindow;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)loadView;
- (void)_voiceOverStatusChanged;
- (void)_cleanUpPresentationWindow;
- (void)dismissViewControllerWithTransition:(int)a0 completion:(id /* block */)a1;

@end
