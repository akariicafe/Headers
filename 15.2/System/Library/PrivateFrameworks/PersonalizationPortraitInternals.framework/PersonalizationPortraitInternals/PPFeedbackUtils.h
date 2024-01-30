@interface PPFeedbackUtils : NSObject

+ (id)feedbackItemsByItemString:(id)a0;
+ (BOOL)shouldSample:(id)a0;
+ (BOOL)shouldSampleExtraction:(id)a0;
+ (void)addBoilerplateToFeedbackLog:(id)a0;
+ (id)feedbackItemForPPFeedbackItem:(id)a0;
+ (id)feedbackMetadataForBaseFeedback:(id)a0;
+ (id)scoredItemWithFeaturesForFeatureDictionary:(id)a0 score:(float)a1;
+ (void)recordUserEventsFromFeedback:(id)a0 matchingFeedbackItems:(id)a1 clientBundleId:(id)a2 clientIdentifier:(id)a3 domain:(unsigned char)a4;
+ (void)recordUniversalSearchSpotlightStatsFromFeedback:(id)a0 clientBundleId:(id)a1 clientIdentifier:(id)a2;
+ (id)featuresForScoreDict:(id)a0;

@end
