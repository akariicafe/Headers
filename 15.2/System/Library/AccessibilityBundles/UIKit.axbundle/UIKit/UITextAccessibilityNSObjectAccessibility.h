@interface UITextAccessibilityNSObjectAccessibility : __UITextAccessibilityNSObjectAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (void)_accessibilityCopy;
- (void)_accessibilityScanText;
- (void)_accessibilityCut;
- (void)_accessibilityPaste;
- (void)_accessibilitySelectAll;
- (void)_accessibilitySelect;
- (void)_accessibilityDelete;
- (void)_accessibilityReplace;
- (void)_accessibilityDefine;
- (void)_accessibilityShare;
- (void)_accessibilityUnderline;
- (void)_accessibilityBold;
- (void)_accessibilityItalic;
- (void)_accessibilityUndo;
- (void)_accessibilityRedo;
- (void)_accessibilitySpeak;
- (void)_accessibilitySpeakSentence;
- (void)_accessibilitySpeakSpellOut;

@end
