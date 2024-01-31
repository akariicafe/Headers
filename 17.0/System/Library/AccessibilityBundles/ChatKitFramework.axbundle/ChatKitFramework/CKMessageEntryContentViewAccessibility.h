@interface CKMessageEntryContentViewAccessibility : __CKMessageEntryContentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shouldShowSubject:(BOOL)a1 shouldDisableAttachments:(BOOL)a2 shouldUseNonEmojiKeyboard:(BOOL)a3;
- (void)setPluginEntryViewController:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityUsesScrollParentForOrdering;
- (void)_accessibilityClearPlugin;

@end
