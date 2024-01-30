@class NSArray;

@interface WFDictateTextLanguagePickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

- (id)possibleStates;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;

@end
