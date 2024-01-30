@class HKQuantityType, NSArray;

@interface WFHealthQuantityAdditionalPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (retain, nonatomic) HKQuantityType *quantityType;

- (id)possibleStates;
- (BOOL)isHidden;
- (id)localizedLabel;
- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)importQuestionBehavior;
- (void)updatePossibleStates;

@end
