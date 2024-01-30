@interface UIAssistantBarButtonItemProvider : NSObject

+ (BOOL)_isDismissButtonVisible;
+ (id)barButtonItemForAssistantItemStyle:(long long)a0 target:(id)a1 forcePlainButton:(BOOL)a2;
+ (BOOL)_isEmojiButtonVisible;
+ (BOOL)_isDictationButtonVisible;
+ (BOOL)_isShowKeyboardButtonVisible;
+ (BOOL)_isKeyboardGroupVisible;
+ (id)configuredSymbolImageWithName:(id)a0 size:(double)a1;
+ (id)imageSymbolConfigurationForAssistantBarWithPointSize:(double)a0;
+ (BOOL)_isInputModeVisible:(id)a0;
+ (BOOL)_isMinimizeAssistantBarButtonVisible;
+ (id)defaultSystemLeadingBarButtonGroupsForItem:(id)a0;
+ (void)setAssistantBarCompact:(BOOL)a0;
+ (id)defaultSystemTrailingBarButtonGroupsForItem:(id)a0;
+ (id)actionForInputMode:(id)a0;
+ (id)languageIndicatorMenu:(BOOL)a0;
+ (BOOL)_isKeyboardItemEnabled;
+ (id)languageIndicatorItem:(BOOL)a0;
+ (id)dictationActionForInputMode:(id)a0 inCurrentInputMode:(id)a1;
+ (id)compactSystemAssistantItem;
+ (id)dictationMenu;
+ (id)barButtonItemForAssistantItemStyle:(long long)a0 target:(id)a1;
+ (id)systemDefaultAssistantItem;
+ (id)unmodifiableSystemAssistantItem:(long long)a0;

@end
