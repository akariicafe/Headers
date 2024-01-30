@class NSString, _ATXDataStore, NSDate;

@interface ATXAnchorModelDataStoreWrapper : NSObject <ATXAnchorModelDataStoreWrapperProtocol> {
    _ATXDataStore *_store;
    NSDate *_twentyOneDaysAgo;
    NSDate *_dateOfOldestAllowedCandidateOccurrenceForCandidateGeneration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionCandidateFeaturesFromActionEvent:(id)a0 actionMetadata:(id)a1 actionOccurred:(BOOL)a2 actionEngaged:(BOOL)a3;
+ (id)appCandidateFeaturesFromAppLaunchEvent:(id)a0 appMetadata:(id)a1 appWasLaunched:(BOOL)a2 appEngaged:(BOOL)a3;
+ (id)anchorFeaturesForAnchorOccurrence:(id)a0 anchor:(id)a1 anchorMetadata:(id)a2;
+ (id)candidateIdFromAppIntentDuetEvent:(id)a0;
+ (id)candidateIdFromAppLaunchDuetEvent:(id)a0;
+ (long long)dayOfWeekIntegerFromATXAnchorModelPBDayOfWeek:(int)a0;
+ (long long)isWeekendFromATXAnchorModelPBDayOfWeek:(int)a0;
+ (id)actionDetailsFromActionCandidateId:(id)a0;
+ (id)actionKeyFromActionCandidateId:(id)a0;

- (id)initWithDataStore:(id)a0;
- (unsigned long long)deleteSamplesThatAreMoreThan28DaysOld;
- (long long)numCandidateIdOccurrencesInJointAnchorContext:(id)a0 anchor:(id)a1 anchorMetadata:(id)a2;
- (long long)numUniqueAnchorOccurrencesForAnchor:(id)a0 candidateId:(id)a1;
- (id)init;
- (void)updateOrInsertAnchorModelTrainingResults:(id)a0 anchor:(id)a1;
- (void).cxx_destruct;
- (id)trainingDataForCandidate:(id)a0 anchor:(id)a1 replacementStringForNilStringValues:(id)a2;
- (long long)numCandidateOccurrencesInAllContextsForCandidate:(id)a0;
- (void)updateOrInsertActionTrainingSample:(id)a0 featurizedAction:(id)a1 actionOccurred:(BOOL)a2 actionEngaged:(BOOL)a3 anchorEvent:(id)a4 anchor:(id)a5;
- (long long)numUniqueAnchorOccurrencesForCandidate:(id)a0 anchor:(id)a1;
- (id)secondsAfterAnchorWhenCandidateOccurredForAnchor:(id)a0 candidateId:(id)a1 onlyConsiderFirstOccurrencePerAnchor:(BOOL)a2;
- (long long)numActionOccurrencesInAllContextsForActionId:(id)a0;
- (id)dateAnchorModelWasLastTrainedForAnchor:(id)a0;
- (id)appLaunchDuetEventsFromCandidateIds:(id)a0 date:(id)a1;
- (void)insertAnchorOccurrence:(id)a0 anchor:(id)a1 featureMetadata:(id)a2;
- (id)scoredActionFromAnchorModelPrediction:(id)a0;
- (void)updateOrInsertLocation:(id)a0;
- (id)dateOfFirstPositiveCandidateOccurrence:(id)a0 anchor:(id)a1 startDate:(id)a2 limit:(unsigned long long)a3;
- (void)updateOrInsertAppTrainingSample:(id)a0 featurizedApp:(id)a1 appWasLaunched:(BOOL)a2 appEngaged:(BOOL)a3 anchorEvent:(id)a4 anchor:(id)a5;
- (id)uniqueCandidateIdsThatOccurredAfterAnchor:(id)a0 candidateType:(id)a1 minOccurrences:(long long)a2;
- (long long)numUniqueAnchorOccurrencesForGenericCandidateId:(id)a0 anchor:(id)a1;
- (long long)numUniqueAnchorOccurrencesWithUniqueCandidateOccurrenceForGenericCandidateId:(id)a0 anchor:(id)a1;
- (id)appLaunchDuetEventFromCandidateId:(id)a0 date:(id)a1;
- (double)timestampOfMostRecentRecordedAnchorOccurrenceForAnchor:(id)a0;
- (id)candidateTypeForCandidateId:(id)a0;
- (id)uniqueCandidateIdsThatOccurredAfterAnchor:(id)a0 candidateType:(id)a1;
- (long long)latestAlogIdForCandidateId:(id)a0;
- (long long)numUniqueAnchorOccurrencesWithUniqueCandidateOccurrenceForCandidate:(id)a0 anchor:(id)a1;
- (void)updateOrInsertAnchorEvent:(id)a0 anchor:(id)a1 featureMetadata:(id)a2;
- (id)candidateIdFromActionMetadata:(id)a0;
- (id)minSlotResolutionParametersFromALogId:(long long)a0 paramHash:(long long)a1;
- (long long)numAppLaunchOccurrencesInAllContextsForAppLaunchCandidateId:(id)a0;
- (unsigned long long)deleteSamplesForBundleIdsNotInList:(id)a0;
- (id)uniqueCandidateIdsThatOccurredAfterAnchor:(id)a0;
- (void)updateOrInsertAnchorType:(id)a0;
- (id)appIntentDuetEventFromCandidateId:(id)a0 date:(id)a1;
- (void)updateOrInsertCandidateEventToDatabaseWithCandidateFeatures:(id)a0 anchor:(id)a1 anchorEvent:(id)a2;
- (id)uniqueAnchorEventIdentifiersForAnchor:(id)a0;
- (id)trainingResultsForAnchor:(id)a0;
- (id)appIntentDuetEventsFromCandidateIds:(id)a0 date:(id)a1;
- (long long)numCandidateOccurrencesInAnchorContextForCandidate:(id)a0 anchor:(id)a1;

@end
