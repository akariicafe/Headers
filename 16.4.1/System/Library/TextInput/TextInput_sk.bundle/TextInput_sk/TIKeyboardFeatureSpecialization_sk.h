@interface TIKeyboardFeatureSpecialization_sk : TIKeyboardFeatureSpecialization

- (BOOL)doesComposeText;
- (id)internalStringToExternal:(id)a0;
- (id)allAccentKeyStrings;
- (id)externalStringToInternal:(id)a0;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (id)nonstopPunctuationCharacters;
- (id)accentKeyStringForKeyboardState:(id)a0;

@end
