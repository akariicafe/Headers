@interface UIAssistantBarButtonItemProvider : NSObject

+ (void)dismissFloatingKeyboardFromPencilKitIfNeeded;
+ (id)compactSystemAssistantItem;
+ (id)defaultSystemTrailingBarButtonGroupsForItem:(id)a0;
+ (id)dictationActionForInputMode:(id)a0 inCurrentInputMode:(id)a1;
+ (void)dismissFloatingKeyboard;
+ (id)barButtonItemForAssistantItemStyle:(long long)a0 target:(id)a1 forcePlainButton:(BOOL)a2;
+ (id)systemDefaultAssistantItem;
+ (id)barButtonItemForAssistantItemStyle:(long long)a0 target:(id)a1;
+ (void)setScribbleLanguageIdentifier:(id)a0;
+ (id)imageSymbolConfigurationForAssistantBarWithPointSize:(double)a0;
+ (id)languageIndicatorImage;
+ (BOOL)_isShowKeyboardButtonVisible;
+ (BOOL)_isScribbleButtonsVisible;
+ (BOOL)isFloatingKeyboardVisible;
+ (id)inputWindowController;
+ (BOOL)_isDismissButtonVisible;
+ (id)unmodifiableSystemAssistantItem:(long long)a0;
+ (void)presentFloatingKeyboard;
+ (BOOL)isKeyboardGroupVisible;
+ (id)dictationMenu;
+ (BOOL)_isMinimizeAssistantBarButtonVisible;
+ (id)defaultSystemLeadingBarButtonGroupsForItem:(id)a0;
+ (BOOL)_isEmojiButtonVisible;
+ (BOOL)_isDictationButtonVisible;
+ (id)languageIndicatorMenu:(BOOL)a0;
+ (id)languageIndicatorItem:(BOOL)a0;
+ (id)actionForInputMode:(id)a0;
+ (BOOL)_isKeyboardItemEnabled;
+ (BOOL)_isInputModeVisible:(id)a0;
+ (void)updateFloatingAssistantBarIfNeeded;
+ (void)setAssistantBarCompact:(BOOL)a0;
+ (id)configuredSymbolImageWithName:(id)a0 size:(double)a1;

@end
