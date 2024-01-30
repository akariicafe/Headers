@interface NewsUI2.SubscriptionService : NSObject <FCSubscriptionObserving> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ notificationController;
    void /* unknown type, empty encoding */ notificationService;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ purchaseController;
}

- (void)handlePurchaseAddedNotificationWithNotification:(id)a0;
- (void)subscriptionController:(id)a0 didAddTags:(id)a1 changeTags:(id)a2 moveTags:(id)a3 removeTags:(id)a4 subscriptionType:(unsigned long long)a5 eventInitiationLevel:(long long)a6;
- (void)subscriptionController:(id)a0 didFindTagsWithNotificationSupport:(id)a1;
- (void)handlePurchaseRemovedNotificationWithNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
