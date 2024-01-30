@interface NewsUI2.SubscriptionService : NSObject <FCSubscriptionObserving> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ notificationController;
    void /* unknown type, empty encoding */ notificationService;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ purchaseController;
}

- (void)subscriptionController:(id)a0 didAddTags:(id)a1 changeTags:(id)a2 moveTags:(id)a3 removeTags:(id)a4 subscriptionType:(unsigned long long)a5;
- (void)subscriptionController:(id)a0 didFindTagsWithNotificationSupport:(id)a1;
- (void)handlePurchaseAddedNotificationWithNotification:(id)a0;
- (void)handlePurchaseRemovedNotificationWithNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
