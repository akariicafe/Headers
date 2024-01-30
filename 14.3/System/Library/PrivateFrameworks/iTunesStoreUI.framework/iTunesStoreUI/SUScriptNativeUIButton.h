@interface SUScriptNativeUIButton : SUScriptButtonNativeObject

+ (id)objectWithDefaultButtonForScriptButton:(id)a0;

- (void)setTag:(long long)a0;
- (long long)tag;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageInsets;
- (void)setTitle:(id)a0;
- (void)setImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setImage:(id)a0;
- (id)image;
- (id)title;
- (void)destroyNativeObject;
- (void)setupNativeObject;
- (void)disconnectButtonAction;
- (void)connectButtonAction;

@end
