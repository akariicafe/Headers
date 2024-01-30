@interface HRERankConfidenceController : NSObject

@property (class, readonly, nonatomic) long long version;

+ (double)_limitRankToValidRange:(double)a0;

- (id)rankRecommendations:(id)a0;
- (void)calculateRankForRecommendations:(id)a0 fromTemplate:(id)a1;
- (id)rankRecommendationsFromSet:(id)a0;

@end
