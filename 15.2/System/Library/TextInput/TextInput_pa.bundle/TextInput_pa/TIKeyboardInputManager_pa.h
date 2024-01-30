@interface TIKeyboardInputManager_pa : TIKeyboardInputManager

@property (nonatomic) BOOL isPhoneticLayout;

- (void)syncToLayoutState:(id)a0;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (void *)initImplementation;
- (id)deleteFromInput:(unsigned long long *)a0;

@end
