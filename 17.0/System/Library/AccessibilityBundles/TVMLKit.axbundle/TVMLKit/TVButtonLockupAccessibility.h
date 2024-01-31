@interface TVButtonLockupAccessibility : __TVButtonLockupAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)_selectButtonAction:(id)a0;
- (id)_accessibilityLastAxLabel;
- (void)_accessibilitySetLastAxLabel:(id)a0;
- (void)_accessibilitySetShouldAnnounceAxLabelChange:(BOOL)a0;
- (BOOL)_accessibilityShouldAnnounceAxLabelChange;

@end
