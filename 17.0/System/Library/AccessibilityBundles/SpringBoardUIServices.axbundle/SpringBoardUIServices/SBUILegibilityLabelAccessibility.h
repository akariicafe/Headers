@interface SBUILegibilityLabelAccessibility : __SBUILegibilityLabelAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityRespondsToUserInteraction;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)_accessibilityOverridesInvisibility;
- (id)_accessibilityParentView;
- (BOOL)_accessibilityViewIsVisible;
- (unsigned int)_accessibilityMediaAnalysisOption;

@end
