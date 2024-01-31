@interface UIKBInputDelegateManagerAccessibility : __UIKBInputDelegateManagerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_deleteBackwardAndNotify:(BOOL)a0 reinsertText:(BOOL)a1;
- (void)insertText:(id)a0 updateInputSource:(BOOL)a1;
- (BOOL)callShouldReplaceExtendedRange:(long long)a0 withText:(id)a1 includeMarkedText:(BOOL)a2;

@end
