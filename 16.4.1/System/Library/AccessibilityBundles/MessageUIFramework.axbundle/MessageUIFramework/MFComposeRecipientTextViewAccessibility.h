@interface MFComposeRecipientTextViewAccessibility : __MFComposeRecipientTextViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_didRemoveRecipient:(id)a0;
- (void)_ensureAddButton;
- (void)_updateInactiveTextView;

@end
