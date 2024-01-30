@class HRETemplateRecommendationGenerator, NSArray, HRERankConfidenceController, NSMutableArray;

@interface HRERecommendationEngine : NSObject

@property (retain, nonatomic) NSMutableArray *recommendationSources;
@property (retain, nonatomic) HRERankConfidenceController *rankingController;
@property (retain, nonatomic) HRETemplateRecommendationGenerator *templateSource;
@property (retain, nonatomic) NSArray *templates;

- (void).cxx_destruct;
- (id)init;
- (id)generateRecommendationsForServiceLikeItems:(id)a0 inHome:(id)a1 options:(unsigned long long)a2;
- (id)_sourcesEnabledWithOptions:(unsigned long long)a0;
- (id)generateRecommendationsForHome:(id)a0 options:(unsigned long long)a1;

@end
