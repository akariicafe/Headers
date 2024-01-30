@interface VSBindableTextField : UITextField

- (id)placeholder;
- (void)setReturnKeyType:(long long)a0;
- (void)setSecureTextEntry:(BOOL)a0;
- (void)setPlaceholder:(id)a0;
- (long long)autocapitalizationType;
- (long long)keyboardType;
- (long long)autocorrectionType;
- (void)setAutocapitalizationType:(long long)a0;
- (long long)returnKeyType;
- (void)setKeyboardType:(long long)a0;
- (id)text;
- (BOOL)isSecureTextEntry;
- (void)setAutocorrectionType:(long long)a0;
- (void)setText:(id)a0;

@end
