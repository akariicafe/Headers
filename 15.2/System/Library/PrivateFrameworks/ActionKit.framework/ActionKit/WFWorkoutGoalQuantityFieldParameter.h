@class NSString, NSArray, WFAction;

@interface WFWorkoutGoalQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver> {
    NSArray *_possibleUnits;
    id _defaultSerializedRepresentation;
}

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unitConversion;

- (unsigned long long)currentWorkoutActivityType;
- (void).cxx_destruct;
- (BOOL)parameterStateIsValid:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (id)possibleUnits;
- (void)setPossibleUnits:(id)a0;
- (id)localizedLabelForPossibleUnit:(id)a0 magnitude:(id)a1 style:(unsigned long long)a2;
- (id)defaultState;
- (void)updatePossibleUnits;
- (void)availableUnitsForWorkoutActivityType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateCurrentStateWithNewUnitString:(id)a0 currentState:(id)a1;

@end
