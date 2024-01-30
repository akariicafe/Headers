@interface UIAccessibilityCustomRotorAccessibility : __UIAccessibilityCustomRotorAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)initWithAttributedName:(id)a0 itemSearchBlock:(id /* block */)a1;
- (id)initWithSystemType:(long long)a0 itemSearchBlock:(id /* block */)a1;
- (id)initWithName:(id)a0 itemSearchBlock:(id /* block */)a1;
- (void)_accessibilityApplyAttributes;

@end
