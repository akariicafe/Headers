@interface MFComposeRecipientTextViewAccessibility : __MFComposeRecipientTextViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateInactiveTextView;
- (void)_didRemoveRecipient:(id)a0;
- (void)_ensureAddButton;

@end
