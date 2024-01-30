@interface UISearchBarTextFieldAccessibility : __UISearchBarTextFieldAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (id)accessibilityLocalizedStringKey;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityEditingModeChanged;
- (id)_accessibilityRightButtons;

@end
