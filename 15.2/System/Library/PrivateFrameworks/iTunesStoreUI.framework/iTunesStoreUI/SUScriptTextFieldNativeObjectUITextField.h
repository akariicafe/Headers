@interface SUScriptTextFieldNativeObjectUITextField : SUScriptTextFieldNativeObject

- (void)setAutocapitalizationType:(long long)a0;
- (void)setValue:(id)a0;
- (long long)autocorrectionType;
- (long long)autocapitalizationType;
- (void)setAutocorrectionType:(long long)a0;
- (void)setWidth:(double)a0;
- (id)value;
- (double)width;
- (long long)keyboardType;
- (void)setKeyboardType:(long long)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setPlaceholder:(id)a0;
- (void)destroyNativeObject;
- (void)setupNativeObject;
- (id)_nativeObjectDelegate;
- (void)_setNativeObjectDelegate:(id)a0;

@end
