@interface PodcastsFoundation.StorePurchaseTask : NSObject <AMSPurchaseDelegate> {
    void /* unknown type, empty encoding */ uiDelegate;
}

- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
