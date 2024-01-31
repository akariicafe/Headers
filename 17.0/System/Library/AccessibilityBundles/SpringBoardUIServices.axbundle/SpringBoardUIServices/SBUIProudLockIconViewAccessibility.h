@interface SBUIProudLockIconViewAccessibility : __SBUIProudLockIconViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityRespondsToUserInteraction;
- (void)_accessibilityLoadAccessibilityInformation;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (BOOL)_accessibilityIsBuddyRunning;
- (BOOL)_accessibilityIsInSleepState;
- (id)lockViewAccessibilityLabel;
- (BOOL)lockViewIsAccessibilityElement;
- (void)setState:(long long)a0 animated:(BOOL)a1 options:(long long)a2 completion:(id /* block */)a3;

@end
