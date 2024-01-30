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

- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (BOOL)isLoaded;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)dismiss;
- (BOOL)shouldShowChatChrome;
- (id)parentTransitioningDelegate;
- (long long)browserPresentationStyle;
- (BOOL)wantsDarkUI;
- (BOOL)wantsOpaqueUI;
- (BOOL)supportsQuickView;
- (BOOL)mayBeKeptInViewHierarchy;
- (long long)parentModalPresentationStyle;
- (void).cxx_destruct;
- (void)browserAppManagerDidSelectPlugin:(id)a0;
- (BOOL)isModalInPresentation;
- (BOOL)isDismissing;
- (void)appManagerViewControllerDidFinish:(id)a0;
- (BOOL)appAllowedByScreenTimeWithBundleIdentifier:(id)a0;
- (void)delegate_BrowserAppManagerDidSelectPlugin:(id)a0;

@end
