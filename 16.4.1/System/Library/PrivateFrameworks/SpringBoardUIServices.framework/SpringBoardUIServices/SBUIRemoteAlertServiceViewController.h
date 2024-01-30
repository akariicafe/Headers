@interface SBUIRemoteAlertServiceViewController : UIViewController <SBUIRemoteAlertServiceInterface_Internal, SBUIRemoteAlertServiceInterface> {
    BOOL _hasPreservedInputViews;
    BOOL _hasSentAnimationFence;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setUserInfo:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)handleDoubleHeightStatusBarTap;
- (void)synchronizeAnimationsInActions:(id /* block */)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)didInvalidateForRemoteAlert;
- (void)didTransitionToAttachedToWindowedAccessory:(BOOL)a0 windowedAccessoryCutoutFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)handleButtonActions:(id)a0;
- (void)noteActivatedWithPresentationMode:(long long)a0;
- (void)prepareForActivationWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)_selectorIsOverriden:(SEL)a0;
- (void)noteActivatedForActivityContinuationWithIdentifier:(id)a0;
- (void)sb_becomeFirstResponder;
- (void)sb_dismissForAlertAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)sb_presentForAlertAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)sb_preserveInputViewsAnimated:(BOOL)a0;
- (void)sb_resignFirstResponder;
- (void)sb_restoreInputViewsAnimated:(BOOL)a0;

@end
