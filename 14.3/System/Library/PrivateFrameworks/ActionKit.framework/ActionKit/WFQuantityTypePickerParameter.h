@class NSArray;

@interface WFQuantityTypePickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;

- (void).cxx_destruct;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;

@end
