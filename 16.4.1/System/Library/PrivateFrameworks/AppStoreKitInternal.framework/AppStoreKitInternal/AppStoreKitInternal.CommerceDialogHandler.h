@interface AppStoreKitInternal.CommerceDialogHandler : NSObject <ASDNotificationCenterDialogObserver> {
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ sheetPresentationViewController;
}

- (void)handleDialogRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleEngagementRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleAuthenticateRequest:(id)a0 resultHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)handleViewPresentationRequest:(id)a0 resultHandler:(id /* block */)a1;

@end
