@interface TIKeyboardFeatureSpecialization_fr : TIKeyboardQuickTypeSpecialization

- (id)terminatorsDeletingAutospace;
- (id)nonstopPunctuationCharacters;
- (id)allAccentKeyStrings;
- (id)accentKeyStringForKeyboardState:(id)a0;
- (void *)createInputManager;
- (id)externalStringToInternal:(id)a0;
- (id)internalStringToExternal:(id)a0;
- (id)accentKeyStringForInputPrefix:(id)a0;

@end
