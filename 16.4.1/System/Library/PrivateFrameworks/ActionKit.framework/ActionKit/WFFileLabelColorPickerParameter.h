@class NSDictionary, NSArray;

@interface WFFileLabelColorPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (readonly, nonatomic) NSDictionary *localizedLabelsForLabelNumbers;

- (id)possibleStates;
- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)accessoryColorForPossibleState:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (Class)singleStateClass;

@end
