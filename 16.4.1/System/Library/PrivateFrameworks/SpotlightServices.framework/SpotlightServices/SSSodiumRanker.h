@interface SSSodiumRanker : NSObject

@property (nonatomic) float textScoreWeight;
@property (nonatomic) float freshnessWeight;

- (id)init;
- (double)_computeFreshnessScore:(double)a0 withQueryTime:(double)a1;
- (long long)compare:(id)a0 to:(id)a1 currentTime:(double)a2;
- (void)sortAndFilterRankedItems:(id)a0 maxCount:(long long)a1 bundleID:(id)a2 userQuery:(id)a3 queryID:(long long)a4 currentTime:(double)a5;
- (void)updateScoresForItems:(id)a0 withBundle:(id)a1 userQuery:(id)a2 currentTime:(double)a3;

@end
