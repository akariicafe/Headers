@interface WFStartWorkoutIntentAction : WFHandleSystemIntentAction

+ (id)unitStringsToWorkoutGoalUnits;
+ (id)workoutActivityTypeToWorkoutIdentifier;

- (id)icon;
- (id)location;
- (BOOL)skipsProcessingHiddenParameters;
- (id)actionForAppIdentifier:(id)a0;
- (BOOL)allowsContinueInAppWhenRunningRemotely;
- (id)appResource;
- (void)initializeParameters;
- (id)parameterForSlot:(id)a0;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (id)selectedAppNotSupportedError;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (id)goalParameter;
- (id)goalUnitTypeFromValue:(id)a0;
- (id)goalValueFromValue:(id)a0;
- (id)identifierForActivityType:(unsigned long long)a0;
- (BOOL)isKjGoal:(id)a0;
- (BOOL)isKmGoal:(id)a0;
- (BOOL)isParameterHidden:(id)a0;
- (id)kjGoalConvertedToJ:(id)a0;
- (id)kmGoalConvertedToM:(id)a0;
- (unsigned long long)normalizedWorkoutActivityType:(unsigned long long)a0;
- (void)resourceAvailabilityChanged;
- (id)workoutGoalUnitTypeNumberForUnitString:(id)a0;
- (id)workoutNameForActivityType:(id)a0;
- (id)workoutTypeParameter;

@end
