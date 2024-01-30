@class FCSportsRecommendationsProvider;

@interface FCSportsRecommendationMappings : NSObject

@property (retain, nonatomic) FCSportsRecommendationsProvider *defaultRecommendations;
@property (retain, nonatomic) FCSportsRecommendationsProvider *alternativeRecommendations;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
