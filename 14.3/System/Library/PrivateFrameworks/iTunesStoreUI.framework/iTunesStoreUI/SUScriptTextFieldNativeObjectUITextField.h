@interface SUScriptTextFieldNativeObjectUITextField : SUScriptTextFieldNativeObject

- (BOOL)becomeFirstResponder;
- (double)width;
- (BOOL)resignFirstResponder;
- (void)setPlaceholder:(id)a0;
- (long long)autocapitalizationType;
- (long long)keyboardType;
- (long long)autocorrectionType;
- (void)setAutocapitalizationType:(long long)a0;
- (void)setKeyboardType:(long long)a0;
- (id)value;
- (void)setWidth:(double)a0;
- (void)setAutocorrectionType:(long long)a0;
- (void)setValue:(id)a0;
- (void)destroyNativeObject;
- (void)setupNativeObject;
- (id)_nativeObjectDelegate;
- (void)_setNativeObjectDelegate:(id)a0;

@end
