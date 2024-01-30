@class NSArray, NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface WBSForYouRecentParsecResultsManager : WBSForYouRecommendationMediatorDataSource {
    NSCache *_cache;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, copy, nonatomic) NSArray *recentRecommendations;

+ (id)recommendationsMatchingTopic:(id)a0 fromArray:(id)a1;

- (void).cxx_destruct;
- (void)_createInternalQueueIfNecessary;
- (void)clearAllResults;
- (id)_bestAcceptableImageForSFResult:(id)a0;
- (id)_cacheEnsuringExistence;
- (BOOL)_hasPermissibleResultTypeForResult:(id)a0;
- (void)appendResultsIfApplicable:(id)a0;
- (void)appendResultsIfApplicable:(id)a0 withDelayedExistenceCheck:(BOOL)a1;
- (void)retrieveRecommendationsMatchingTopic:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
