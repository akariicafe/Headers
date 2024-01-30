@class UIWindow;

@interface UIAccessibilityPresentingViewController : UIViewController {
    UIWindow *_presentationWindow;
}

- (void)dealloc;
- (id)init;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissViewControllerWithTransition:(int)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)_cleanUpPresentationWindow;
- (void)_voiceOverStatusChanged;

@end
