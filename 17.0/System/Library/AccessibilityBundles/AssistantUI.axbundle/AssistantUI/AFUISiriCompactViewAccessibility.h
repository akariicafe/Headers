@interface AFUISiriCompactViewAccessibility : __AFUISiriCompactViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dealloc;
- (void)accessibilityElementDidLoseFocus;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityPerformMagicTap;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_constructAndAddBugReportButtonWithImage:(id)a0;
- (void)_setupContentViews;
- (void)setSiriSessionState:(long long)a0;
- (void)_axSetLabelForSessionState:(long long)a0;

@end
