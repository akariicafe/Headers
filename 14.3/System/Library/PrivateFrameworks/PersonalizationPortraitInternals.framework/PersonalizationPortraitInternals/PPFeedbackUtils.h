@interface PPFeedbackUtils : NSObject

+ (void)addBoilerplateToFeedbackLog:(id)a0;
+ (BOOL)shouldSampleExtraction:(id)a0;
+ (BOOL)shouldSample:(id)a0;
+ (BOOL)_yesWithProbability:(double)a0;
+ (id)feedbackItemForPPFeedbackItem:(id)a0;
+ (id)feedbackMetadataForBaseFeedback:(id)a0;
+ (id)scoredItemWithFeaturesForFeatureDictionary:(id)a0 score:(float)a1;
+ (id)feedbackItemsByItemString:(id)a0;

@end
