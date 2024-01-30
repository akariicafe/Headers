@interface SeymourUI.MultiUserStartWorkoutInterceptor : NSObject <AMSUIDynamicViewControllerDelegate, AMSUIWebDelegate> {
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ dynamicOfferCoordinator;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ eventSubscription;
    void /* unknown type, empty encoding */ marketingPurchaseHandler;
    void /* unknown type, empty encoding */ multiUserClient;
    void /* unknown type, empty encoding */ serviceSubscriptionCache;
    void /* unknown type, empty encoding */ sessionClient;
    void /* unknown type, empty encoding */ webUserInterfaceCoordinator;
    void /* unknown type, empty encoding */ state;
}

- (void)webViewController:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)webViewController:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)dynamicViewController:(id)a0 didFinishWithPurchaseResult:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
