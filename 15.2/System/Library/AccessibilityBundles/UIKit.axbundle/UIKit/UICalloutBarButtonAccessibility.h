@interface UICalloutBarButtonAccessibility : __UICalloutBarButtonAccessibility_super

+ (id)buttonWithTitle:(id)a0 action:(SEL)a1 type:(int)a2 inView:(id)a3;
+ (id)buttonWithImage:(id)a0 action:(SEL)a1 type:(int)a2 inView:(id)a3;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)accessibilityPerformEscape;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)_accessibilityLoadAccessibilityInformation;

@end
