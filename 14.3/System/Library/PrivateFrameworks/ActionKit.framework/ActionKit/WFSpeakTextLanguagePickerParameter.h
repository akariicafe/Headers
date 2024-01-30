@class NSArray;

@interface WFSpeakTextLanguagePickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

- (id)possibleStates;
- (void).cxx_destruct;
- (id)availableLanguageCodes;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)defaultLanguageCode;

@end
