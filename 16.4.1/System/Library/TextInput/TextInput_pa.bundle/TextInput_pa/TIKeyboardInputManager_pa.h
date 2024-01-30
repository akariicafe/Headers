@interface TIKeyboardInputManager_pa : TIKeyboardInputManager

@property (nonatomic) BOOL isPhoneticLayout;

- (void *)initImplementation;
- (id)deleteFromInput:(unsigned long long *)a0;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (void)syncToLayoutState:(id)a0;

@end
