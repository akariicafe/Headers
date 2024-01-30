@interface TIKeyboardInputManager_my : TIKeyboardInputManager

- (BOOL)doesComposeText;
- (id)externalStringToInternal:(id)a0;
- (id)internalStringToExternal:(id)a0;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (id)deleteFromInput:(unsigned long long *)a0;

@end
