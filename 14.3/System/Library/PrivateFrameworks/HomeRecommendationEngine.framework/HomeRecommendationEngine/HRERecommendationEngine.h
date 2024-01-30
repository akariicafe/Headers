@class HREUserProfiler, HMHomeManager, NSMutableArray, HRERecommendationRankingController;

@interface HRERecommendationEngine : NSObject

@property (retain, nonatomic) NSMutableArray *recommendationSources;
@property (retain, nonatomic) HRERecommendationRankingController *rankingController;
@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) HREUserProfiler *userProfiler;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (id)generateRecommendationsForServiceLikeItems:(id)a0 inHome:(id)a1 options:(unsigned long long)a2;
- (id)_sourcesEnabledWithOptions:(unsigned long long)a0;
- (id)generateRecommendationsForHome:(id)a0 options:(unsigned long long)a1;
- (id)getUserProfiler;

@end
