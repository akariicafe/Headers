@interface TUIPredictionViewAccessibility : __TUIPredictionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (void)_reloadCellsAnimated:(BOOL)a0;
- (void)configurePredictionCell:(id)a0 forCandidate:(id)a1 animated:(BOOL)a2;
- (BOOL)isAccessibilityElement;
- (long long)accessibilityNavigationStyle;
- (unsigned long long)_accessibilityScannerGroupTraits;
- (void)_accessibilitySendCandidateNotificationIfNecessary:(BOOL)a0;

@end
