@class SFDialogView, NSString, WBSTabDialogManager, SFDialog, UIViewController;
@protocol SFDialogViewControllerPresenting, SFDialogViewPresenting, SFDialogControllerDelegate, SFAuthenticatorDialog;

@interface SFDialogController : NSObject <SFDialogViewDelegate> {
    WBSTabDialogManager *_dialogManager;
    SFDialogView *_dialogView;
    UIViewController *_dialogViewController;
    int _webProcessID;
}

@property (weak, nonatomic) id<SFDialogControllerDelegate> delegate;
@property (weak, nonatomic) id<SFDialogViewPresenting> dialogPresenter;
@property (weak, nonatomic) id<SFDialogViewControllerPresenting> viewControllerPresenter;
@property (readonly, nonatomic) SFDialog *presentedDialog;
@property (readonly, nonatomic) SFDialog<SFAuthenticatorDialog> *presentedAuthenticatorDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applicationDidEnterBackground;

- (void)presentNextDialogIfNeeded;
- (void)presentDialog:(id)a0;
- (struct { int x0; unsigned long long x1; })_currentSlot;
- (id)_initWithDialogManager:(id)a0;
- (void)_dismissCurrentDialogWithResponse:(id)a0;
- (void)dialogView:(id)a0 didSelectActionAtIndex:(unsigned long long)a1 withInputText:(id)a2 passwordText:(id)a3;
- (void)owningTabWillClose;
- (void)presentDialog:(id)a0 animateAlongsidePresentation:(id /* block */)a1 dismissal:(id /* block */)a2;
- (void)owningWebViewWillNavigate;
- (void)owningWebViewWillBecomeActive;
- (void)owningWebViewDidCommitNavigationWithURL:(id)a0;
- (void)_dismissDialogWithAdditionalAnimations:(id /* block */)a0;
- (id)init;
- (long long)_presentDialog:(id)a0 forWebProcessID:(int)a1 withAdditionalAnimations:(id /* block */)a2;
- (unsigned long long)_tabID;
- (void).cxx_destruct;
- (int)_currentWebProcessID;
- (void)owningWebViewDidChangeProcessID;
- (BOOL)_isPresentingDialog;
- (void)cancelPresentedDialogIfNeeded;

@end
