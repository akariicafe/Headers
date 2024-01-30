@interface HRERecommendationRankingController : NSObject

+ (double)maxRank;
+ (double)minRank;

- (id)rankRecommendations:(id)a0 userProfiler:(id)a1;
- (double)calculateAdjustedCosineSimilarityScore:(id)a0 userProfiler:(id)a1;
- (id)rankRecommendationsFromSet:(id)a0 userProfiler:(id)a1;

@end
