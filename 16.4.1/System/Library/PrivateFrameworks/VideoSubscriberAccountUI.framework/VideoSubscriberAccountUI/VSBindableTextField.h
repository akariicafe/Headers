@interface VSBindableTextField : UITextField

- (long long)autocapitalizationType;
- (long long)returnKeyType;
- (void)setPlaceholder:(id)a0;
- (void)setAutocapitalizationType:(long long)a0;
- (void)setKeyboardType:(long long)a0;
- (void)setAutocorrectionType:(long long)a0;
- (void)setSecureTextEntry:(BOOL)a0;
- (void)setReturnKeyType:(long long)a0;
- (long long)keyboardType;
- (long long)autocorrectionType;
- (void)setText:(id)a0;
- (id)text;
- (id)placeholder;
- (BOOL)isSecureTextEntry;

@end
