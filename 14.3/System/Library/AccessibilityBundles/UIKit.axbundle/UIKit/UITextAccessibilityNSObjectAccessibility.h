@interface UITextAccessibilityNSObjectAccessibility : __UITextAccessibilityNSObjectAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (void)_accessibilityPaste;
- (void)_accessibilityCut;
- (void)_accessibilityReplace;
- (void)_accessibilityCopy;
- (void)_accessibilityDefine;
- (void)_accessibilityItalic;
- (void)_accessibilityUnderline;
- (void)_accessibilityRedo;
- (void)_accessibilitySpeak;
- (void)_accessibilitySpeakSentence;
- (void)_accessibilitySpeakSpellOut;
- (void)_accessibilitySelect;
- (void)_accessibilityDelete;
- (void)_accessibilityShare;
- (void)_accessibilityBold;
- (void)_accessibilityUndo;
- (void)_accessibilitySelectAll;
- (BOOL)_accessibilityFontTraitEnabled:(id)a0 enabledValue:(id)a1;
- (void)_accessibilityPostStyleOptionStatus:(id)a0;

@end
