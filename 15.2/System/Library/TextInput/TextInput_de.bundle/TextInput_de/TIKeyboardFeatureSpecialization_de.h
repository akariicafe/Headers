@interface TIKeyboardFeatureSpecialization_de : TIKeyboardQuickTypeSpecialization

- (BOOL)shouldLearnLowercaseAtBeginningOfSentence;
- (void *)createInputManager;
- (id)externalStringToInternal:(id)a0;
- (id)internalStringToExternal:(id)a0;

@end
