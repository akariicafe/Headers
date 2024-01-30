@interface SUScriptTextFieldNativeObjectUITextField : SUScriptTextFieldNativeObject

- (long long)autocapitalizationType;
- (double)width;
- (void)setPlaceholder:(id)a0;
- (void)setAutocapitalizationType:(long long)a0;
- (void)setKeyboardType:(long long)a0;
- (void)setAutocorrectionType:(long long)a0;
- (BOOL)becomeFirstResponder;
- (void)setWidth:(double)a0;
- (long long)keyboardType;
- (long long)autocorrectionType;
- (id)value;
- (BOOL)resignFirstResponder;
- (void)setValue:(id)a0;
- (id)_nativeObjectDelegate;
- (void)_setNativeObjectDelegate:(id)a0;
- (void)destroyNativeObject;
- (void)setupNativeObject;

@end
