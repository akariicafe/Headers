@class NSDictionary;

@interface HREActionSetDerivingRecommendationGeneratorProcess : HREStandardAsyncRecommendationGenerationProcess

@property (retain, nonatomic) NSDictionary *sourceCharacteristics;

- (void).cxx_destruct;
- (id)_recommendationForActionSet:(id)a0 inHome:(id)a1;
- (id)_createRecommendationWithActionSet:(id)a0;
- (BOOL)shouldGenerateRecommendations;
- (id)generateRecommendations;

@end
