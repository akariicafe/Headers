@class NSString, _SFDialog, WBSTabDialogManager, _SFDialogView, UIViewController;
@protocol _SFDialogControllerDelegate, _SFDialogViewPresenting, _SFDialogViewControllerPresenting, _SFAuthenticatorDialog;

@interface _SFDialogController : NSObject <_SFDialogViewDelegate> {
    WBSTabDialogManager *_dialogManager;
    _SFDialogView *_dialogView;
    UIViewController *_dialogViewController;
    int _webProcessID;
}

@property (weak, nonatomic) id<_SFDialogControllerDelegate> delegate;
@property (weak, nonatomic) id<_SFDialogViewPresenting> dialogPresenter;
@property (weak, nonatomic) id<_SFDialogViewControllerPresenting> viewControllerPresenter;
@property (readonly, nonatomic) _SFDialog *presentedDialog;
@property (readonly, nonatomic) _SFDialog<_SFAuthenticatorDialog> *presentedAuthenticatorDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applicationDidEnterBackground;

- (void)presentDialog:(id)a0 animateAlongsidePresentation:(id /* block */)a1 dismissal:(id /* block */)a2;
- (id)init;
- (unsigned long long)_tabID;
- (void).cxx_destruct;
- (void)presentDialog:(id)a0;
- (struct { int x0; unsigned long long x1; })_currentSlot;
- (BOOL)_isPresentingDialog;
- (void)owningWebViewWillBecomeActive;
- (id)_initWithDialogManager:(id)a0;
- (int)_currentWebProcessID;
- (void)owningWebViewWillNavigate;
- (void)owningWebViewDidChangeProcessID;
- (void)presentNextDialogIfNeeded;
- (long long)_presentDialog:(id)a0 forWebProcessID:(int)a1 withAdditionalAnimations:(id /* block */)a2;
- (void)_dismissDialogWithAdditionalAnimations:(id /* block */)a0;
- (void)_dismissCurrentDialogWithResponse:(id)a0;
- (void)cancelPresentedDialogIfNeeded;
- (void)dialogView:(id)a0 didSelectActionAtIndex:(unsigned long long)a1 withInputText:(id)a2 passwordText:(id)a3;
- (void)owningTabWillClose;
- (void)owningWebViewDidCommitNavigationWithURL:(id)a0;

@end
