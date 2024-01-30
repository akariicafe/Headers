@interface NewsUI2.PaidBundleViaOfferUIHandler : NSObject <FCBundleSubscriptionChangeObserver, AMSPushHandlerDelegate> {
    void /* unknown type, empty encoding */ notificationService;
    void /* unknown type, empty encoding */ offerManager;
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ paidBundleViaOfferHandler;
    void /* unknown type, empty encoding */ presentationOperationManager;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ appIconBadgeIdentifierBase;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ router;
    void /* unknown type, empty encoding */ sessionBadgeState;
    void /* unknown type, empty encoding */ sessionBadgeSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_paidBundleViaOfferConfig;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)pushPayload:(id)a0 withBadgeRequest:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
