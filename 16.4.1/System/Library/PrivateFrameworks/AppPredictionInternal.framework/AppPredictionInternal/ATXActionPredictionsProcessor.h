@interface ATXActionPredictionsProcessor : NSObject

+ (BOOL)scoredActionsAreDuplicatesWithScoredAction1:(id)a0 scoredAction2:(id)a1;
+ (void)addEligibleCreateAlarmIndexesToAcceptedIndexes:(id)a0 currentDate:(id)a1 enabledAlarms:(id)a2 idx:(unsigned long long)a3 params:(id)a4 parameterCombinations:(id)a5;
+ (id)indicesOfNonDuplicateScoredActions:(id)a0;
+ (BOOL)validTimeToSuggestAlarmForAlarmComponents:(id)a0 currentDate:(id)a1;
+ (id)_contactIdentifiersReferencedByAction:(id)a0;
+ (id)removeDuplicateActionPredictions:(id)a0;
+ (id)removeMissingOrBlockedRecipientPredictions:(id)a0;
+ (id)removeAlarmActionsInconsistentWithAlarmAppState:(id)a0 enabledAlarms:(id)a1 disabledAlarms:(id)a2 currentDate:(id)a3;
+ (id)removeRecentlyDeletedNotePredictions:(id)a0;
+ (id)removeAlarmActionsInconsistentWithAlarmAppState:(id)a0;
+ (BOOL)isBlockedPhoneNumberContainedInNumbers:(id)a0;
+ (BOOL)actionPredictionsContainsAlarmAction:(id)a0;
+ (id)removeDuplicateTVActionPredictions:(id)a0;
+ (BOOL)isBlockedEmailAddressContainedInAddresses:(id)a0;
+ (id)userAlarms;
+ (id)hourAndMinuteComponentsFromDateComponents:(id)a0;
+ (void)addEligibleToggleAlarmIndexesToAcceptedIndexes:(id)a0 currentDate:(id)a1 disabledAlarms:(id)a2 enabledAlarms:(id)a3 idx:(unsigned long long)a4 params:(id)a5 parameterCombinations:(id)a6;

@end
