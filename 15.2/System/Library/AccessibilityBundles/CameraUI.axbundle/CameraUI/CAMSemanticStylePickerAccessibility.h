@interface CAMSemanticStylePickerAccessibility : __CAMSemanticStylePickerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)_axAnnouncementValue;
- (void)_axChangeValueInDirection:(long long)a0;
- (id)_axSemanticStyle;

@end
