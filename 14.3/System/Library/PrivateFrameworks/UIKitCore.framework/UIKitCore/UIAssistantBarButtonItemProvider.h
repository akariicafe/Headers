@interface UIAssistantBarButtonItemProvider : NSObject

+ (id)imageSymbolConfigurationForAssistantBarWithPointSize:(double)a0;
+ (id)systemDefaultAssistantItem;
+ (BOOL)_isShowKeyboardButtonVisible;
+ (id)defaultSystemLeadingBarButtonGroupsForItem:(id)a0;
+ (id)defaultSystemTrailingBarButtonGroupsForItem:(id)a0;
+ (id)barButtonItemForAssistantItemStyle:(long long)a0 target:(id)a1;
+ (id)unmodifiableSystemAssistantItem;
+ (id)configuredSymbolImageWithName:(id)a0 size:(double)a1;
+ (BOOL)_isDismissButtonVisible;
+ (BOOL)_isDictationButtonVisible;
+ (BOOL)_isKeyboardGroupVisible;
+ (BOOL)_isEmojiButtonVisible;

@end
