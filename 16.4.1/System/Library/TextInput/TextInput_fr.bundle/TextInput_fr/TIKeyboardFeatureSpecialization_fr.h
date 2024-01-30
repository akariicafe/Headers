@interface TIKeyboardFeatureSpecialization_fr : TIKeyboardQuickTypeSpecialization

- (id)internalStringToExternal:(id)a0;
- (id)allAccentKeyStrings;
- (id)externalStringToInternal:(id)a0;
- (id)terminatorsDeletingAutospace;
- (id)nonstopPunctuationCharacters;
- (id)accentKeyStringForKeyboardState:(id)a0;
- (void *)createInputManager;
- (id)accentKeyStringForInputPrefix:(id)a0;

@end
