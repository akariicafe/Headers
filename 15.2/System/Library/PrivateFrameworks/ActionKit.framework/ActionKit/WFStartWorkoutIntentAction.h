@interface WFStartWorkoutIntentAction : WFHandleSystemIntentAction

+ (id)workoutActivityTypeToWorkoutIdentifier;
+ (id)unitStringsToWorkoutGoalUnits;

- (id)icon;
- (id)location;
- (void)initializeParameters;
- (BOOL)skipsProcessingHiddenParameters;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (id)parameterForSlot:(id)a0;
- (id)appResource;
- (BOOL)allowsContinueInAppWhenRunningRemotely;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (id)selectedAppNotSupportedError;
- (void)resourceAvailabilityChanged;
- (id)workoutNameForActivityType:(id)a0;
- (id)goalValueFromValue:(id)a0;
- (BOOL)isKmGoal:(id)a0;
- (BOOL)isKjGoal:(id)a0;
- (id)kmGoalConvertedToM:(id)a0;
- (id)kjGoalConvertedToJ:(id)a0;
- (id)goalUnitTypeFromValue:(id)a0;
- (id)workoutGoalUnitTypeNumberForUnitString:(id)a0;
- (id)identifierForActivityType:(unsigned long long)a0;
- (unsigned long long)normalizedWorkoutActivityType:(unsigned long long)a0;
- (id)goalParameter;
- (id)workoutTypeParameter;
- (BOOL)isParameterHidden:(id)a0;

@end
