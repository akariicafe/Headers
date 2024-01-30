@interface SUScriptNativeUIButton : SUScriptButtonNativeObject

+ (id)objectWithDefaultButtonForScriptButton:(id)a0;

- (void)setTag:(long long)a0;
- (void)setImage:(id)a0;
- (long long)tag;
- (id)image;
- (id)title;
- (void)setTitle:(id)a0;
- (void)setImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageInsets;
- (void)connectButtonAction;
- (void)destroyNativeObject;
- (void)disconnectButtonAction;
- (void)setupNativeObject;

@end
