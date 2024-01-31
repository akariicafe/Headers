@interface UIDatePickerContentViewAccessibility : __UIDatePickerContentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)canBecomeFocused;
- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityDatePickerComponentType;

@end
