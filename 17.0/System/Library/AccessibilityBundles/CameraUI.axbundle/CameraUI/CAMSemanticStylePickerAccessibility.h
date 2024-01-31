@interface CAMSemanticStylePickerAccessibility : __CAMSemanticStylePickerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (id)_axSemanticStyle;
- (id)_axAnnouncementValue;
- (void)_axChangeValueInDirection:(long long)a0;

@end
