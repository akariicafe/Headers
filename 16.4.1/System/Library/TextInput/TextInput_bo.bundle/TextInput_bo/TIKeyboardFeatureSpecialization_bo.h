@interface TIKeyboardFeatureSpecialization_bo : TIKeyboardFeatureSpecialization

- (BOOL)doesComposeText;
- (id)internalStringToExternal:(id)a0;
- (id)externalStringToInternal:(id)a0;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;

@end
