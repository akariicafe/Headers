@class NSArray;

@interface WFiTunesStoreCountryPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

- (id)possibleStates;
- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)a0;
- (BOOL)preferParameterValuePicker;
- (Class)singleStateClass;

@end
