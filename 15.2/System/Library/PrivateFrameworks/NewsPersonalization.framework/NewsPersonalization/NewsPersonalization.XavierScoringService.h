@interface NewsPersonalization.XavierScoringService : NSObject <FCFeedPersonalizing, FCNewsAppConfigurationObserving> {
    void /* unknown type, empty encoding */ aggregateContext;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ translationProvider;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ bundleSubscription;
    void /* unknown type, empty encoding */ purchaseController;
    void /* unknown type, empty encoding */ _personalizationTreatment;
    void /* unknown type, empty encoding */ favoritesPersonalizer;
}

- (id)sortItems:(id)a0;
- (id)sortItems:(id)a0 options:(long long)a1;
- (void)prepareForUseWithCompletionHandler:(id /* block */)a0;
- (double)decayedPublisherDiversificationPenalty;
- (void)fetchAggregateMapForPersonalizingItem:(id)a0 completion:(id /* block */)a1;
- (id)limitItemsByMinimumItemQuality:(id)a0;
- (void)configurationManager:(id)a0 appConfigurationDidChange:(id)a1;
- (id)sortItems:(id)a0 configurationSet:(long long)a1;
- (id)rankTagIDsDescending:(id)a0;
- (id)scoresForTagIDs:(id)a0;
- (id)sortItems:(id)a0 options:(long long)a1 configurationSet:(long long)a2;
- (id)limitItemsByFlowRate:(id)a0 timeInterval:(double)a1 publisherCount:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
