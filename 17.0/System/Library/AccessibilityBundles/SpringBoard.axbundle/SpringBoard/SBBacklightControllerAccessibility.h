@interface SBBacklightControllerAccessibility : __SBBacklightControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (void)isIdling;

- (BOOL)screenIsDim;
- (void)setBacklightState:(long long)a0 source:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (float)_factorToPublishForBacklightState:(long long)a0;

@end
