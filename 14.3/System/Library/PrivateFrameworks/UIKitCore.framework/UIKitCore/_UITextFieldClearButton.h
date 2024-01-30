@protocol _UITextFieldClearButtonImageProviding;

@interface _UITextFieldClearButton : UIButton

@property (weak, nonatomic) id<_UITextFieldClearButtonImageProviding> imageProvider;
@property (nonatomic) BOOL hasCustomImage;

+ (BOOL)_cursorInteractionEnabled;

- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (BOOL)_isModernButton;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void).cxx_destruct;
- (id)_defaultImageForState:(unsigned long long)a0 withConfiguration:(id)a1;
- (BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)a0;

@end
