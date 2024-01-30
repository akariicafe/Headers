@interface TIKeyboardFeatureSpecialization_cs : TIKeyboardFeatureSpecialization

- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (BOOL)doesComposeText;
- (id)nonstopPunctuationCharacters;
- (id)allAccentKeyStrings;
- (id)accentKeyStringForKeyboardState:(id)a0;
- (id)externalStringToInternal:(id)a0;
- (id)internalStringToExternal:(id)a0;

@end
