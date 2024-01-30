@interface UITableViewCellEditControlAccessibility : __UITableViewCellEditControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (id)accessibilityValue;
- (id)accessibilityLabel;

@end
