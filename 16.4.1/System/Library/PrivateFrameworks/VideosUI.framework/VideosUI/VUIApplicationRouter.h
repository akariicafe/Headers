@interface VUIApplicationRouter : NSObject

+ (void)dismissPresentedViewController;
+ (BOOL)handleAccountSettingsEventWithUrl:(id)a0 amsBagKey:(id)a1 useAMSWebView:(BOOL)a2;
+ (void)_amsBagURLForKey:(id)a0 withCompletion:(id /* block */)a1;
+ (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)a0;
+ (void)_handleAccountSettingsEventWithUrl:(id)a0 amsBagKey:(id)a1 useAMSWebView:(BOOL)a2 isModalPresentation:(BOOL)a3 originalNavigationController:(id)a4;
+ (BOOL)_handleDocumentDataSource:(id)a0 targetResponder:(id)a1 appContext:(id)a2 documentOptions:(id)a3 completion:(id /* block */)a4;
+ (BOOL)_handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 eventDataSource:(id)a3 documentOptions:(id)a4 extraInfo:(id *)a5;
+ (void)_navigateAccountSettingsWithDestinationViewController:(id)a0 shouldEmbedInNavController:(BOOL)a1 isModalPresentation:(BOOL)a2 originalNavigationController:(id)a3;
+ (void)_performForType:(long long)a0 targetResponder:(id)a1 appContext:(id)a2 eventDataSource:(id)a3 documentOptions:(id)a4;
+ (id)_viewControllerWithIdentifier:(id)a0;
+ (id)currentNavigationController;
+ (void)dismissOrPopLastViewControllerWithCompletion:(id /* block */)a0;
+ (void)dismissOrPopViewControllerWithId:(id)a0 completion:(id /* block */)a1;
+ (id)eventDataSourceForEvent:(id)a0 routerDataSource:(id)a1;
+ (BOOL)handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 routerDataSource:(id)a3 supplementaryData:(id)a4 extraInfo:(id *)a5;
+ (void)pushAccountSettingsEventWithUrl:(id)a0 amsBagKey:(id)a1 useAMSWebView:(BOOL)a2 fromNavigationController:(id)a3;
+ (id)topMostVisibleViewController;
+ (id)topPresentedViewController;

@end
