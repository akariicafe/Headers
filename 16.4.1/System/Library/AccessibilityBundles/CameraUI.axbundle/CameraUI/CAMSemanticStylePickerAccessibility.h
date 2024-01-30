@interface CAMSemanticStylePickerAccessibility : __CAMSemanticStylePickerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (id)_axAnnouncementValue;
- (void)_axChangeValueInDirection:(long long)a0;
- (id)_axSemanticStyle;

@end
