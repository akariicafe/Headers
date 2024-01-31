@interface MTAStopwatchViewControllerAccessibility : __MTAStopwatchViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setMode:(unsigned long long)a0;
- (void)loadView;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_addLap:(double)a0;
- (void)_axSetLapButtonTraitsForMode:(unsigned long long)a0;
- (void)lapLapTimer;

@end
