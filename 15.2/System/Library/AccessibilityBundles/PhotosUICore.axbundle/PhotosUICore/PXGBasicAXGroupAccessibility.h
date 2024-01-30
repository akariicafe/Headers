@interface PXGBasicAXGroupAccessibility : __PXGBasicAXGroupAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)updateSubgroupsWithChangeDetails:(id)a0;
- (void)_updateLayoutIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)_axPXGScrollView;

@end
