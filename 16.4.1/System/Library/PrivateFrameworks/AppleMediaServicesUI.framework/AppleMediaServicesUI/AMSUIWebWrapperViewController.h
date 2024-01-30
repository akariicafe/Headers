@class NSString, AMSUIWebClientContext;

@interface AMSUIWebWrapperViewController : AMSUIWebViewController <AMSUIWebPagePresenter, AMSUIWebDelegate>

@property (retain, nonatomic) AMSUIWebClientContext *wrapperContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (void)webViewController:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)webViewController:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)webViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)webViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;

@end
