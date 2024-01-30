@interface UIDatePickerContentViewAccessibility : __UIDatePickerContentViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)canBecomeFocused;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (unsigned long long)_accessibilityDatePickerComponentType;

@end
