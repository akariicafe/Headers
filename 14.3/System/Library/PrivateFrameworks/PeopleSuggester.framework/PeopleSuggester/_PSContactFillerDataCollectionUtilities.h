@interface _PSContactFillerDataCollectionUtilities : NSObject

+ (int)calculateTimeBucketGivenInteraction:(id)a0 timeOfShareInteraction:(id)a1;
+ (BOOL)recipientPredictedCorrectlyByRule:(id)a0 interaction:(id)a1 bundleId:(id)a2;
+ (id)calculateNormalizedShareFrequencyForContactGivenInteraction:(id)a0 totalFrequency:(id)a1 numberOfDaysToLookBack:(int)a2 interactionStore:(id)a3;
+ (unsigned int)enforceOneSignificantFigureForSmallDouble:(double)a0;
+ (id)calculateNormalizedTextingFrequencyForContactGivenInteraction:(id)a0 totalFrequency:(id)a1 numberOfDaysToLookBack:(int)a2 interactionStore:(id)a3 direction:(id)a4;
+ (id)calculateNormalizedCallingFrequencyForContactGivenInteraction:(id)a0 totalFrequency:(id)a1 numberOfDaysToLookBack:(int)a2 interactionStore:(id)a3 direction:(id)a4;
+ (int)calculateTimeSinceLastCallForContactGivenInteraction:(id)a0 interactionStore:(id)a1 direction:(id)a2 timeOfShareInteraction:(id)a3;
+ (int)calculateTimeSinceLastShareForContactGivenInteraction:(id)a0 interactionStore:(id)a1 timeOfShareInteraction:(id)a2;
+ (int)calculateTimeSinceLastTextForContactGivenInteraction:(id)a0 interactionStore:(id)a1 direction:(id)a2 timeOfShareInteraction:(id)a3;
+ (id)getListOfContactsInteractedInTheLastNumberOfDays:(int)a0 interactionStore:(id)a1 limit:(int)a2;
+ (id)getBehaviorRulesGivenContext:(id)a0 behaviorRetriever:(id)a1;
+ (void)calculateNormContantsGivenInteractionStore:(id)a0 normConstants:(id)a1;
+ (void)extractUserFeaturesIntoPETMessage:(id)a0 normConstants:(id)a1 behaviorRetriever:(id)a2;
+ (id)filterRulesBasedOnInteractionGivenRuleList:(id)a0 interaction:(id)a1;
+ (double)enforceOneSignificantFigureForDouble:(double)a0;
+ (void)extractFeaturesFromBehaviorRulesIntoPETMessage:(id)a0 behaviorRules:(id)a1 contextItems:(id)a2;
+ (void)extractFrequencyRecencyFeaturesIntoPETMessage:(id)a0 recipientID:(id)a1 interaction:(id)a2 normConstants:(id)a3 numberOfDaysToLookBack:(int)a4 interactionStore:(id)a5 timeOfShareInteraction:(id)a6;
+ (BOOL)doesTheRecipientsMatchInInteraction1:(id)a0 interaction2:(id)a1;
+ (id)resolveUniqueContactIdGivenInteraction:(id)a0;
+ (unsigned int)contactFillerBucketedValue:(unsigned long long)a0;

@end
