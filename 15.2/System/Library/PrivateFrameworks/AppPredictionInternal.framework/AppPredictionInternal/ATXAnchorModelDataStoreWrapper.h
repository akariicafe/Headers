@class NSString, _ATXDataStore, NSMutableDictionary, NSDate;

@interface ATXAnchorModelDataStoreWrapper : NSObject <ATXAnchorModelDataStoreWrapperProtocol> {
    _ATXDataStore *_store;
    NSDate *_twentyOneDaysAgo;
    NSDate *_dateOfOldestAllowedCandidateOccurrenceForCandidateGeneration;
    NSMutableDictionary *_numCandidateOccurrencesInAllContextsForCandidateTypeCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)candidateIdFromModeBiomeEvent:(id)a0;
+ (id)candidateIdFromBiomeEvent:(id)a0;
+ (id)modeDetailsFromModeCandidateId:(id)a0;
+ (id)actionCandidateFeaturesFromActionEvent:(id)a0 actionMetadata:(id)a1 actionOccurred:(BOOL)a2 actionEngaged:(BOOL)a3;
+ (id)appCandidateFeaturesFromAppLaunchEvent:(id)a0 appMetadata:(id)a1 appWasLaunched:(BOOL)a2 appEngaged:(BOOL)a3;
+ (id)modeCandidateFeaturesFromModeEvent:(id)a0 modeMetadata:(id)a1 modeOccurred:(BOOL)a2 modeEngaged:(BOOL)a3;
+ (id)anchorFeaturesForAnchorOccurrence:(id)a0 anchor:(id)a1 anchorMetadata:(id)a2;
+ (id)candidateIdFromAppIntentDuetEvent:(id)a0;
+ (id)candidateIdFromAppLaunchDuetEvent:(id)a0;
+ (id)populateCandidateOccurrencesForFeatures:(id)a0 withLaunchHistoryMetadata:(id)a1;
+ (long long)dayOfWeekIntegerFromATXAnchorModelPBDayOfWeek:(int)a0;
+ (long long)isWeekendFromATXAnchorModelPBDayOfWeek:(int)a0;
+ (id)actionDetailsFromActionCandidateId:(id)a0;
+ (id)actionKeyFromActionCandidateId:(id)a0;

- (unsigned long long)deleteSamplesForBundleIdsNotInList:(id)a0;
- (id)trainingResultsForAnchor:(id)a0;
- (id)uniqueCandidateIdsThatOccurredAfterAnchor:(id)a0;
- (long long)numCandidateOccurrencesInAnchorContextForCandidate:(id)a0 anchor:(id)a1;
- (id)initWithDataStore:(id)a0;
- (void)updateOrInsertAnchorModelTrainingResults:(id)a0 anchor:(id)a1;
- (id)uniqueCandidateIdsThatOccurredAfterAnchor:(id)a0 candidateType:(id)a1 minOccurrences:(long long)a2;
- (void)updateOrInsertAppTrainingSample:(id)a0 featurizedApp:(id)a1 appWasLaunched:(BOOL)a2 appEngaged:(BOOL)a3 anchorEvent:(id)a4 anchor:(id)a5;
- (id)appLaunchDuetEventFromCandidateId:(id)a0 date:(id)a1;
- (long long)numCandidateOccurrencesInAnchorContextForCandidateType:(id)a0 anchor:(id)a1;
- (void)updateOrInsertAnchorType:(id)a0;
- (id)uniqueAnchorEventIdentifiersForAnchor:(id)a0;
- (void)updateOrInsertActionTrainingSample:(id)a0 featurizedAction:(id)a1 actionOccurred:(BOOL)a2 actionEngaged:(BOOL)a3 anchorEvent:(id)a4 anchor:(id)a5;
- (id)appLaunchDuetEventsFromCandidateIds:(id)a0 date:(id)a1;
- (id)uniqueCandidateIdsThatOccurredAfterAnchor:(id)a0 candidateType:(id)a1;
- (id)appIntentDuetEventFromCandidateId:(id)a0 date:(id)a1;
- (id)dateOfFirstPositiveCandidateOccurrence:(id)a0 anchor:(id)a1 startDate:(id)a2 limit:(unsigned long long)a3;
- (void)insertAnchorSuggestionOutcome:(unsigned long long)a0 date:(id)a1 anchorType:(id)a2 anchorEventIdentifier:(id)a3 candidateId:(id)a4;
- (long long)latestAlogIdForCandidateId:(id)a0;
- (long long)numCandidateOccurrencesInAllContextsForCandidateType:(id)a0;
- (id)modeBiomeEventsFromCandidateIds:(id)a0 date:(id)a1;
- (long long)numUniqueAnchorOccurrencesForCandidate:(id)a0 anchor:(id)a1;
- (long long)numModeOccurrencesInAllContexts;
- (long long)numUniqueAnchorOccurrencesWithUniqueCandidateOccurrenceForGenericCandidateId:(id)a0 anchor:(id)a1;
- (id)historicalAnchorOccurrenceDatesForAnchor:(id)a0;
- (long long)numAppLaunchOccurrencesInAllContextsForAppLaunchCandidateId:(id)a0;
- (long long)numUniqueAnchorOccurrencesForAnchor:(id)a0 candidateId:(id)a1;
- (id)modeBiomeEventFromCandidateId:(id)a0 date:(id)a1;
- (void).cxx_destruct;
- (double)timestampOfMostRecentRecordedAnchorOccurrenceForAnchor:(id)a0;
- (id)dateAnchorModelWasLastTrainedForAnchor:(id)a0;
- (id)init;
- (void)updateOrInsertAnchorEvent:(id)a0 anchor:(id)a1 featureMetadata:(id)a2;
- (long long)numActionOccurrencesInAllContexts;
- (id)trainingDataForCandidate:(id)a0 anchor:(id)a1 replacementStringForNilStringValues:(id)a2;
- (id)appIntentDuetEventsFromCandidateIds:(id)a0 date:(id)a1;
- (long long)numUniqueAnchorOccurrencesWithUniqueCandidateOccurrenceForCandidate:(id)a0 anchor:(id)a1;
- (unsigned long long)deleteSamplesThatAreMoreThan28DaysOld;
- (void)updateOrInsertCandidateEventToDatabaseWithCandidateFeatures:(id)a0 anchor:(id)a1 anchorEvent:(id)a2;
- (long long)numCandidateIdOccurrencesInJointAnchorContext:(id)a0 anchor:(id)a1 anchorMetadata:(id)a2;
- (id)candidateIdFromActionMetadata:(id)a0;
- (long long)numModeOccurrencesInAllContextsForModeId:(id)a0;
- (long long)numAppLaunchOccurrencesInAllContexts;
- (long long)numActionOccurrencesInAllContextsForActionId:(id)a0;
- (long long)numUniqueAnchorOccurrencesForGenericCandidateId:(id)a0 anchor:(id)a1;
- (void)updateOrInsertLocation:(id)a0;
- (void)assignMetricsForTrainingResult:(id)a0 anchorType:(id)a1 anchorEventIdentifier:(id)a2 candidateId:(id)a3;
- (id)candidateTypeForCandidateId:(id)a0;
- (id)secondsAfterAnchorWhenCandidateOccurredForAnchor:(id)a0 candidateId:(id)a1 onlyConsiderFirstOccurrencePerAnchor:(BOOL)a2;
- (id)minSlotResolutionParametersFromALogId:(long long)a0 paramHash:(long long)a1;
- (long long)numCandidateOccurrencesInAllContextsForCandidate:(id)a0;
- (void)insertAnchorOccurrence:(id)a0 anchor:(id)a1 featureMetadata:(id)a2;
- (void)updateOrInsertModeTrainingSample:(id)a0 featurizedMode:(id)a1 modeOccurred:(BOOL)a2 modeEngaged:(BOOL)a3 anchorEvent:(id)a4 anchor:(id)a5;
- (id)scoredActionFromAnchorModelPrediction:(id)a0;

@end
