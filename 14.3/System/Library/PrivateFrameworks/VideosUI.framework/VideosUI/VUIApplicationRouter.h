@interface VUIApplicationRouter : NSObject

+ (void)dismissPresentedViewController;
+ (BOOL)handleAccountSettingsEvent:(id)a0 url:(id)a1 amsBagKey:(id)a2 useAMSWebView:(BOOL)a3;
+ (id)topPresentedViewController;
+ (id)currentNavigationController;
+ (id)topMostVisibleViewController;
+ (id)eventDataSourceForEvent:(id)a0 routerDataSource:(id)a1;
+ (id)eventDataSourceForEvent:(id)a0 viewElement:(id)a1;
+ (BOOL)_handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 viewElement:(id)a3 eventDataSource:(id)a4 documentOptions:(id)a5 extraInfo:(id *)a6;
+ (void)_performForType:(long long)a0 targetResponder:(id)a1 appContext:(id)a2 viewElement:(id)a3 eventDataSource:(id)a4 documentOptions:(id)a5;
+ (BOOL)_handleDocumentDataSource:(id)a0 targetResponder:(id)a1 appContext:(id)a2 viewElement:(id)a3 documentOptions:(id)a4 completion:(id /* block */)a5;
+ (void)_handleAccountSettingsPresentationWithViewController:(id)a0 shouldEmbedInNavController:(BOOL)a1;
+ (void)_amsBagURLForKey:(id)a0 withCompletion:(id /* block */)a1;
+ (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)a0;
+ (id)_viewControllerWithIdentifier:(id)a0;
+ (BOOL)handleEvent:(id)a0 targetResponder:(id)a1 viewElement:(id)a2 extraInfo:(id *)a3;
+ (void)dismissOrPopViewControllerWithId:(id)a0 completion:(id /* block */)a1;
+ (void)dismissOrPopLastViewControllerWithCompletion:(id /* block */)a0;
+ (BOOL)handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 routerDataSource:(id)a3 supplementaryData:(id)a4 extraInfo:(id *)a5;

@end
