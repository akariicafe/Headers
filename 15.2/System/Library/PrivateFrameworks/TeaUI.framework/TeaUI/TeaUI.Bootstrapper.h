@interface TeaUI.Bootstrapper : NSObject {
    void /* unknown type, empty encoding */ mainViewControllerFactory;
    void /* unknown type, empty encoding */ onboardingViewControllerFactory;
    void /* unknown type, empty encoding */ onboardingViewDismissalAnimator;
    void /* unknown type, empty encoding */ deferredPromise;
    void /* unknown type, empty encoding */ deferringGroup;
    void /* unknown type, empty encoding */ shouldCollapseSidebar;
}

- (void).cxx_destruct;
- (id)init;
- (void)startBootstrappingWithWindow:(id)a0 shouldOnboard:(BOOL)a1;
- (void)startBootstrappingWithWindow:(id)a0 shouldOnboard:(BOOL)a1 shouldCollapseSidebar:(BOOL)a2;
- (void)afterBootstrapOnQueue:(id)a0 runBootstrapCallbackBlock:(id /* block */)a1;

@end
