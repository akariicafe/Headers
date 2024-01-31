@interface PXGBasicAXGroupAccessibility : __PXGBasicAXGroupAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)updateSubgroupsWithChangeDetails:(id)a0;
- (void)_updateLayoutIfNeeded;
- (id)_axPXGScrollView;

@end
