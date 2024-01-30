@interface UIDatePickerContentViewAccessibility : __UIDatePickerContentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)canBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)_accessibilityDatePickerComponentType;

@end
