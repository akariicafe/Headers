@interface SBRootFolderViewAccessibility : __SBRootFolderViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setSpecialLayoutManager:(id)a0 completionHandler:(id /* block */)a1;
- (void)setIdleText:(id)a0;
- (id)_accessibilityUserTestingChildren;
- (BOOL)shouldGroupAccessibilityChildren;
- (long long)_accessibilityCompareElement:(id)a0 toElement:(id)a1;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilitySubviews;
- (id)_accessibilityHitTestSubviews;

@end
