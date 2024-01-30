@interface NewsUI2.OfflineIssueAutoDownloader : NSObject <FCBundleSubscriptionChangeObserver, FCSubscriptionObserving> {
    void /* unknown type, empty encoding */ currentIssuesChecker;
    void /* unknown type, empty encoding */ offlineIssueManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ triggerDeduper;
}

- (void)subscriptionController:(id)a0 didAddTags:(id)a1 changeTags:(id)a2 moveTags:(id)a3 removeTags:(id)a4 subscriptionType:(unsigned long long)a5 eventInitiationLevel:(long long)a6;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
