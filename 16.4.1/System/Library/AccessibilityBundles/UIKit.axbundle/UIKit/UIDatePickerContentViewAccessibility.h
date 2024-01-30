@interface UIDatePickerContentViewAccessibility : __UIDatePickerContentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (BOOL)canBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityDatePickerComponentType;

@end
