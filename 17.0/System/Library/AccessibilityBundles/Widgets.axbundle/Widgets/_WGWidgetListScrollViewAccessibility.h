@interface _WGWidgetListScrollViewAccessibility : ___WGWidgetListScrollViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (long long)accessibilityContainerType;
- (id)focusGroupIdentifier;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (BOOL)_accessibilityScrollToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forView:(id)a1;
- (BOOL)accessibilityScrollToVisibleWithChild:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_axAdjustedFrameForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
