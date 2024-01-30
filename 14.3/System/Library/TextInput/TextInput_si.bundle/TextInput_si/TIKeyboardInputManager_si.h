@interface TIKeyboardInputManager_si : TIKeyboardInputManager

@property (nonatomic) unsigned short lastTypedChar;

- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)deleteFromInputWithContext:(id)a0;
- (id)addInput:(id)a0 flags:(unsigned int)a1 point:(struct CGPoint { double x0; double x1; })a2 firstDelete:(unsigned long long *)a3;
- (unsigned short)composedCharacterWithInputCharacter:(unsigned short)a0;

@end
