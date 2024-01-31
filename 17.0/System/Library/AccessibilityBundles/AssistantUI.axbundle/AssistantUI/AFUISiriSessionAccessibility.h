@interface AFUISiriSessionAccessibility : __AFUISiriSessionAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)cancelSpeechRequest;
- (void)assistantConnection:(id)a0 receivedCommand:(id)a1 completion:(id /* block */)a2;
- (BOOL)_axIsAddViewsCommandAllowed:(id)a0;
- (BOOL)_axIsAppInClarity:(id)a0;

@end
