@class NSString, UINavigationController, CKAppManagerViewController;
@protocol CKBrowserAppManagerViewControllerDelegate;

@interface CKBrowserAppManagerViewController : CKBrowserViewController <UIPresentationControllerDelegatePrivate, UIViewControllerTransitioningDelegate, CKAppManagerViewControllerDelegate> {
    UINavigationController *_navController;
    CKAppManagerViewController *_appViewController;
}

@property (weak, nonatomic) id<CKBrowserAppManagerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (BOOL)wantsDarkUI;
- (BOOL)shouldShowChatChrome;
- (id)parentTransitioningDelegate;
- (long long)browserPresentationStyle;
- (BOOL)wantsOpaqueUI;
- (BOOL)supportsQuickView;
- (BOOL)mayBeKeptInViewHierarchy;
- (long long)parentModalPresentationStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)browserAppManagerDidSelectPlugin:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)appManagerViewControllerDidFinish:(id)a0;
- (BOOL)appAllowedByScreenTimeWithBundleIdentifier:(id)a0;
- (void)delegate_BrowserAppManagerDidSelectPlugin:(id)a0;
- (void)dismiss;
- (BOOL)isDismissing;
- (BOOL)isLoaded;
- (void)viewDidLoad;

@end
