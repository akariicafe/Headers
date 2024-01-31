@interface MailboxTableCellAccessibility : __MailboxTableCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityValue;
- (long long)_accessibilityScannerActivateBehavior;
- (void)_setUnreadCount:(unsigned long long)a0;
- (BOOL)_accessibilityMailboxUsesUnreadCount;
- (void)setDetailsDisclosureButton:(id)a0;

@end
