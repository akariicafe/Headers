@class FCNewsPersonalizationFeaturePriorsConfiguration, FCNewsPersonalizationTrainingBiases, FCNewsPersonalizationTrainingFeatureFlags, FCNewsPersonalizationAggregateModificationConfigurations, FCNewsPersonalizationEventConditionalsConfigurations;

@interface FCNewsPersonalizationTrainingConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationEventConditionalsConfigurations *eventConditionalsConfigurations;
@property (retain, nonatomic) FCNewsPersonalizationAggregateModificationConfigurations *aggregateModificationConfigurations;
@property (nonatomic) double decayRate;
@property (retain, nonatomic) FCNewsPersonalizationFeaturePriorsConfiguration *priorsConfiguration;
@property (retain, nonatomic) FCNewsPersonalizationTrainingBiases *biases;
@property (retain, nonatomic) FCNewsPersonalizationTrainingFeatureFlags *featureFlags;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
