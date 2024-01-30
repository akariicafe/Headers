@class NSDictionary;

@interface PPSocialHighlightFeaturizer : NSObject

@property (readonly, nonatomic) NSDictionary *featureValues;

+ (id)trialSpecifiedFeatures;

- (id)initWithFeatureValues:(id)a0;
- (id)featurizeHighlights:(id)a0;
- (id)initWithFeedbackPublisher:(id)a0 topicStore:(id)a1 interactionStore:(id)a2 significantContactHandles:(id)a3 features:(id)a4 highlights:(id)a5;
- (void).cxx_destruct;

@end
