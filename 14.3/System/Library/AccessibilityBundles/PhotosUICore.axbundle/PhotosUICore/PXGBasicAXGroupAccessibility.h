@interface PXGBasicAXGroupAccessibility : __PXGBasicAXGroupAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)updateSubgroupsWithChangeDetails:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)_updateLayoutIfNeeded;
- (id)_axPXGView;
- (id)_axPXGScrollView;

@end
