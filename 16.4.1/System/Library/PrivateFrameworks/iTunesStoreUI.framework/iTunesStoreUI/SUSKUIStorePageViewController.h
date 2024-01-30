@class NSString, SKUIIPhoneProductPageViewController, SKStoreProductViewController, SKUIStorePageViewController, UIViewController;

@interface SUSKUIStorePageViewController : SUViewController <SKUIIPhoneProductPageDelegate, SKStoreProductViewControllerDelegatePrivate> {
    UIViewController *_activeChildViewController;
    SKUIIPhoneProductPageViewController *_iphoneProductPageViewController;
    SKStoreProductViewController *_remoteProductViewController;
    SKUIStorePageViewController *_storePageViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAnimated:(BOOL)a0;
- (void)productViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)initWithSection:(id)a0;
- (void)dealloc;
- (void)loadView;
- (void)productViewController:(id)a0 presentProductWithRequest:(id)a1 animated:(BOOL)a2;
- (void)_loadClientContextWithCompletionBlock:(id /* block */)a0;
- (BOOL)iPhoneProductPage:(id)a0 shouldOpenItem:(id)a1;
- (BOOL)iPhoneProductPage:(id)a0 shouldOpenURL:(id)a1;
- (void)_setActiveChildViewController:(id)a0;
- (void)_showIPhoneProductPageWithPage:(id)a0 clientContext:(id)a1;
- (void)_showProductPageWithPageDictionary:(id)a0;
- (void)_showRemoteViewControllerWithPageDictionary:(id)a0;
- (void)_showStorePageWithPageDictionary:(id)a0;
- (void)reloadWithStorePage:(id)a0 forURL:(id)a1;

@end
