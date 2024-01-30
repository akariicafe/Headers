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
- (void)retrieveRecommendationsMatchingTopic:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)appendResultsIfApplicable:(id)a0 withDelayedExistenceCheck:(BOOL)a1;
- (BOOL)_hasPermissibleResultTypeForResult:(id)a0;
- (id)_bestAcceptableImageForSFResult:(id)a0;
- (id)_cacheEnsuringExistence;
- (void)appendResultsIfApplicable:(id)a0;
- (void)clearAllResults;

@end
