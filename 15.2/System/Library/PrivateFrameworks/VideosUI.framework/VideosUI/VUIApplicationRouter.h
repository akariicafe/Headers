@interface VUIApplicationRouter : NSObject

+ (void)dismissPresentedViewController;
+ (id)topPresentedViewController;
+ (void)_handleAccountSettingsPresentationWithViewController:(id)a0 shouldEmbedInNavController:(BOOL)a1;
+ (void)_amsBagURLForKey:(id)a0 withCompletion:(id /* block */)a1;
+ (void)_performForType:(long long)a0 targetResponder:(id)a1 appContext:(id)a2 eventDataSource:(id)a3 documentOptions:(id)a4;
+ (BOOL)_handleDocumentDataSource:(id)a0 targetResponder:(id)a1 appContext:(id)a2 documentOptions:(id)a3 completion:(id /* block */)a4;
+ (id)currentNavigationController;
+ (id)_viewControllerWithIdentifier:(id)a0;
+ (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)a0;
+ (id)eventDataSourceForEvent:(id)a0 routerDataSource:(id)a1;
+ (BOOL)handleAccountSettingsEvent:(id)a0 url:(id)a1 amsBagKey:(id)a2 useAMSWebView:(BOOL)a3;
+ (BOOL)_handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 eventDataSource:(id)a3 documentOptions:(id)a4 extraInfo:(id *)a5;
+ (void)dismissOrPopViewControllerWithId:(id)a0 completion:(id /* block */)a1;
+ (void)dismissOrPopLastViewControllerWithCompletion:(id /* block */)a0;
+ (id)topMostVisibleViewController;
+ (BOOL)handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 routerDataSource:(id)a3 supplementaryData:(id)a4 extraInfo:(id *)a5;

@end
