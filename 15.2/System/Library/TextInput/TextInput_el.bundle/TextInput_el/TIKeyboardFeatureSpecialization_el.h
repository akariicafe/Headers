@interface TIKeyboardFeatureSpecialization_el : TIKeyboardFeatureSpecialization

- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (BOOL)doesComposeText;
- (id)sentenceTrailingCharacters;
- (id)sentenceDelimitingCharacters;
- (id)nonstopPunctuationCharacters;
- (id)sentencePrefixingCharacters;
- (void *)createInputManager;
- (id)externalStringToInternal:(id)a0;
- (id)internalStringToExternal:(id)a0;

@end
