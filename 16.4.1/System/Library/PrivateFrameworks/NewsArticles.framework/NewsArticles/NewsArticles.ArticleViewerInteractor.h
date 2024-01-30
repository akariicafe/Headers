@interface NewsArticles.ArticleViewerInteractor : NSObject <FCSubscriptionObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ dataManager;
    void /* unknown type, empty encoding */ blueprintProvider;
    void /* unknown type, empty encoding */ pageBlueprintManager;
    void /* unknown type, empty encoding */ pageBlueprintFactory;
    void /* unknown type, empty encoding */ insertAdvertisementBlueprintModifier;
    void /* unknown type, empty encoding */ pageTracker;
    void /* unknown type, empty encoding */ paidAccessChecker;
    void /* unknown type, empty encoding */ commandCenter;
}

- (void)subscriptionController:(id)a0 didAddTags:(id)a1 changeTags:(id)a2 moveTags:(id)a3 removeTags:(id)a4 subscriptionType:(unsigned long long)a5;
- (id)init;
- (void).cxx_destruct;

@end
