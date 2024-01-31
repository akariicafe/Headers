@interface UICalloutBarButtonAccessibility : __UICalloutBarButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (id)buttonWithImage:(id)a0 action:(SEL)a1 type:(int)a2 inView:(id)a3 visualStyle:(id)a4;
+ (id)buttonWithTitle:(id)a0 action:(SEL)a1 type:(int)a2 inView:(id)a3 visualStyle:(id)a4;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityPerformEscape;
- (unsigned long long)_accessibilityAutomationType;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityTextViewTextOperationResponder;

@end
