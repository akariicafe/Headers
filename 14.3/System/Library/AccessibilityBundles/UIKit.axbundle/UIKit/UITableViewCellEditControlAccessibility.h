@interface UITableViewCellEditControlAccessibility : __UITableViewCellEditControlAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (id)accessibilityValue;

@end
