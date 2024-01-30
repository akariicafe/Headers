@class NSString;

@interface _UITextFieldVisualStyle_tvOS : _UITextFieldVisualStyle <_UITextFieldEditingProcessorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)placeholderColor;
- (void)handleTextVibrancy;
- (id)defaultFocusedTextColor;
- (id)parentViewForTextContentView;
- (id)defaultTextColorForKeyboardAppearance;
- (BOOL)textShouldUseVibrancy;
- (id)editingProcessorOverridingEditingAttributes:(id)a0;
- (id)_defaultTextColorForUserInterfaceStyle;
- (id)_defaultTextColorBlackKeyboard;
- (id)_defaultTextColorDarkKeyboard;
- (id)_defaultTextColorLightKeyboard;
- (id)_placeholderTextColorBlackKeyboard;
- (id)_placeholderTextColorDarkKeyboard;
- (id)_placeholderTextColorLightKeyboard;
- (id)_placeholderTextColorFocused;
- (id)_defaultEditingFont;
- (id)defaultTextColor;

@end
