@interface SRSiriViewControllerAccessibility : __SRSiriViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)siriDidDeactivateWithCompletion:(id /* block */)a0;
- (void)siriSessionDidTransitionFromState:(long long)a0 toState:(long long)a1 event:(long long)a2 machAbsoluteTransitionTime:(double)a3;
- (void)speechSynthesisDidStartSpeakingWithIdentifier:(id)a0;
- (void)speechSynthesisDidStopSpeakingWithIdentifier:(id)a0 queueIsEmpty:(BOOL)a1;

@end
