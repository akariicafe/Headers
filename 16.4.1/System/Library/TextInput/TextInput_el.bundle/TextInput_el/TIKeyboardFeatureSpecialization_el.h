@interface TIKeyboardFeatureSpecialization_el : TIKeyboardFeatureSpecialization

- (BOOL)doesComposeText;
- (id)internalStringToExternal:(id)a0;
- (id)externalStringToInternal:(id)a0;
- (id)sentencePrefixingCharacters;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (id)nonstopPunctuationCharacters;
- (id)sentenceDelimitingCharacters;
- (id)sentenceTrailingCharacters;
- (void *)createInputManager;

@end
