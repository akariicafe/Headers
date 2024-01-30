@class SKRemoteStorePageViewController, NSString, SKStoreProductViewController, _UIAsyncInvocation, SKInvocationQueueProxy;
@protocol SKUIServiceStorePageViewController;

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate> {
    _UIAsyncInvocation *_cancelRequest;
    id /* block */ _loadBlock;
    SKStoreProductViewController *_productPageViewController;
    SKRemoteStorePageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceStorePageViewController> *_serviceProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)productViewControllerDidFinish:(id)a0;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)_didFinishWithResult:(id)a0 error:(id)a1;
- (void)_didLoadWithResult:(BOOL)a0 error:(id)a1;
- (void)_dismissProductPageViewController;
- (void)_prepareToLoadWithCompletionBlock:(id /* block */)a0;
- (void)_showProductPageWithItemIdentifier:(id)a0;
- (void)loadPageWithURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)loadPageWithURLBagKey:(id)a0 completionBlock:(id /* block */)a1;

@end
