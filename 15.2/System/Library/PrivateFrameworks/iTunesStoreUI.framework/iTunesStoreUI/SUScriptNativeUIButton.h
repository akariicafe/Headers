@interface SUScriptNativeUIButton : SUScriptButtonNativeObject

+ (id)objectWithDefaultButtonForScriptButton:(id)a0;

- (void)setTag:(long long)a0;
- (long long)tag;
- (id)title;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)image;
- (void)setTitle:(id)a0;
- (void)setImage:(id)a0;
- (void)destroyNativeObject;
- (void)setupNativeObject;
- (void)disconnectButtonAction;
- (void)connectButtonAction;

@end
