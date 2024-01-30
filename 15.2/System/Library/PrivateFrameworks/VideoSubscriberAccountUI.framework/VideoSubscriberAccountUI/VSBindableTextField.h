@interface VSBindableTextField : UITextField

- (void)setAutocapitalizationType:(long long)a0;
- (BOOL)isSecureTextEntry;
- (void)setSecureTextEntry:(BOOL)a0;
- (long long)autocorrectionType;
- (long long)autocapitalizationType;
- (void)setAutocorrectionType:(long long)a0;
- (long long)returnKeyType;
- (void)setReturnKeyType:(long long)a0;
- (void)setText:(id)a0;
- (id)placeholder;
- (long long)keyboardType;
- (void)setKeyboardType:(long long)a0;
- (id)text;
- (void)setPlaceholder:(id)a0;

@end
