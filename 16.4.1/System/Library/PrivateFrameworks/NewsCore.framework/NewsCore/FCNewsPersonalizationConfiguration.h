@class FCNewsPersonalizationFeatureConfiguration, FCNewsPersonalizationTrainingConfiguration, FCTabiPersonalizationConfiguration, FCNewsArticleEmbeddingsConfiguration, FCStatelessPersonalizationConfiguration, FCUserEventHistoryTrackingConfiguration;

@interface FCNewsPersonalizationConfiguration : NSObject

@property (retain, nonatomic) FCStatelessPersonalizationConfiguration *statelessPersonalizationConfiguration;
@property (retain, nonatomic) FCUserEventHistoryTrackingConfiguration *trackingConfiguration;
@property (retain, nonatomic) FCNewsPersonalizationFeatureConfiguration *featureConfiguration;
@property (retain, nonatomic) FCNewsPersonalizationTrainingConfiguration *trainingConfiguration;
@property (retain, nonatomic) FCTabiPersonalizationConfiguration *tabiPersonalizationConfiguration;
@property (readonly, nonatomic) FCNewsArticleEmbeddingsConfiguration *articleEmbeddingsConfiguration;

+ (id)defaultConfiguration;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
