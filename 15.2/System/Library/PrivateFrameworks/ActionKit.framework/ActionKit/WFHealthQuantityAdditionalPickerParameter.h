@class HKQuantityType, NSArray;

@interface WFHealthQuantityAdditionalPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (retain, nonatomic) HKQuantityType *quantityType;

- (id)localizedLabel;
- (id)possibleStates;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)importQuestionBehavior;
- (void)updatePossibleStates;

@end
