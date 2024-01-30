@class NSArray;

@interface WFLocalePickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

+ (id)availableLocaleIdentifiers;

- (id)possibleStates;
- (void).cxx_destruct;
- (id)localizedPlaceholder;
- (id)localizedLabelForPossibleState:(id)a0;

@end
