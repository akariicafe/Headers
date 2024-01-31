@interface PHSlidingViewAccessibility : __PHSlidingViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)createFindMyUI;
- (void)interactiveStartWithCountdownModel:(id)a0;
- (void)repeatingUpdateAnimatedSliderForCountdownNumber:(unsigned long long)a0 forModel:(id)a1;
- (void)setSlidingViewState:(unsigned long long)a0;
- (void)showSlidingViewModel:(id)a0 animatedSliderCompletion:(id /* block */)a1 medicalIDSliderCompletion:(id /* block */)a2 shouldMaxVolumeCompletion:(id /* block */)a3;

@end
