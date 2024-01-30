@interface TIKeyboardInputManager_my : TIKeyboardInputManager

- (BOOL)doesComposeText;
- (id)internalStringToExternal:(id)a0;
- (id)externalStringToInternal:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (BOOL)deletesComposedTextByComposedCharacterSequence;

@end
