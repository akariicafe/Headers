@class NSArray;

@interface WFiTunesStoreCountryPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

- (id)possibleStates;
- (void).cxx_destruct;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;

@end
