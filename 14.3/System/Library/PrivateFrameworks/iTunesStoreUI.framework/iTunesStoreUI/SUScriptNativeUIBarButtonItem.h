@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject {
    BOOL _isBackButton;
}

+ (id)objectWithDefaultButtonForScriptButton:(id)a0;

- (int)buttonType;
- (void)setLoading:(BOOL)a0;
- (void)setTag:(long long)a0;
- (BOOL)isLoading;
- (long long)tag;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageInsets;
- (void)setTitle:(id)a0;
- (BOOL)isBackButton;
- (void)setImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)styleString;
- (void)setImage:(id)a0;
- (id)image;
- (id)title;
- (BOOL)isShowingConfirmation;
- (void)destroyNativeObject;
- (void)setupNativeObject;
- (void)hideConfirmationAnimated:(BOOL)a0;
- (void)disconnectButtonAction;
- (void)connectButtonAction;
- (void)setStyleFromString:(id)a0;
- (void)showConfirmationWithTitle:(id)a0 animated:(BOOL)a1;
- (id)systemItemString;

@end
