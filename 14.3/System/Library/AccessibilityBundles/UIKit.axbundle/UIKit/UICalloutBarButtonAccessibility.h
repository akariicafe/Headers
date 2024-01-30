@interface UICalloutBarButtonAccessibility : __UICalloutBarButtonAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (id)buttonWithTitle:(id)a0 action:(SEL)a1 type:(int)a2 inView:(id)a3;
+ (id)buttonWithImage:(id)a0 action:(SEL)a1 type:(int)a2 inView:(id)a3;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (unsigned long long)accessibilityTraits;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)accessibilityPerformEscape;
- (id)_accessibilityTextViewTextOperationResponder;

@end
