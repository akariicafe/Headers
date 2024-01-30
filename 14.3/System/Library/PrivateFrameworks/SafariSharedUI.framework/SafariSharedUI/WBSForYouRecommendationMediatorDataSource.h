@interface WBSForYouRecommendationMediatorDataSource : NSObject

- (void)retrieveRecommendationsMatchingTopic:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)emitStartRetrievingRecommendationsPerformanceMarker;
- (void)recommendationsWithTopics:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)notifyContentsDidChangeFromSource:(unsigned long long)a0;
- (void)notifyImageWasUpdatedForRecommendation:(id)a0;

@end
