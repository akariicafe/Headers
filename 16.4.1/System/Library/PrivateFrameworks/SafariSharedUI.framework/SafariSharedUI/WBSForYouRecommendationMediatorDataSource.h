@interface WBSForYouRecommendationMediatorDataSource : NSObject

- (void)emitStartRetrievingRecommendationsPerformanceMarker;
- (void)notifyContentsDidChangeFromSource:(unsigned long long)a0;
- (void)notifyImageWasUpdatedForRecommendation:(id)a0;
- (void)recommendationsWithTopics:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)retrieveRecommendationsMatchingTopic:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
