@interface AppStoreKitInternal.CommerceDialogHandler : NSObject <ASDNotificationCenterDialogObserver> {
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ sheetPresentationViewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleEngagementRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleAuthenticateRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 resultHandler:(id /* block */)a1;

@end
