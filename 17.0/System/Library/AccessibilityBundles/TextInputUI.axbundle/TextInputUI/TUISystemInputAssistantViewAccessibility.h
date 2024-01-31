@interface TUISystemInputAssistantViewAccessibility : __TUISystemInputAssistantViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setShowsExpandableButtonBarItems:(BOOL)a0;
- (void)_didTapExpandButton:(id)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (BOOL)_accessibilityIsScannerGroup;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityScannerGroupElements;
- (unsigned long long)_accessibilityScannerGroupTraits;
- (void)_axAddCurrentGroup:(id)a0 toElements:(id)a1;
- (BOOL)_isPredictionOrCandidateView:(id)a0;

@end
