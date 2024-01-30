@class NSArray;

@interface WFQuantityTypePickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;

- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;
- (Class)singleStateClass;

@end
