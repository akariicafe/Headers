@class NSArray;

@interface WFFitnessWorkoutTypePickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

- (id)possibleStates;
- (void).cxx_destruct;
- (id)localizedPlaceholder;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;

@end
