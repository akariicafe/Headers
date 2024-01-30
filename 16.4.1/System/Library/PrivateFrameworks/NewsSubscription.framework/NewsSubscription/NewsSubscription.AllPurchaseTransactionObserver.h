@interface NewsSubscription.AllPurchaseTransactionObserver : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ inAppSubscriptionStatusChecker;
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ tagController;
    void /* unknown type, empty encoding */ purchaseController;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ purchaseAdContextEntriesManager;
    void /* unknown type, empty encoding */ webOptinFlowManager;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ router;
    void /* unknown type, empty encoding */ failedTransactionPurchaseContexts;
    void /* unknown type, empty encoding */ familySharingLandingPageLauncher;
    void /* unknown type, empty encoding */ entitlementService;
    void /* unknown type, empty encoding */ postPurchaseOnboardingManager;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0 hideBundleDetectionUI:(BOOL)a1;
- (void)handlePurchaseAddedNotificationWithNotification:(id)a0;
- (void)subscriptionsFoundDismissedWithNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
