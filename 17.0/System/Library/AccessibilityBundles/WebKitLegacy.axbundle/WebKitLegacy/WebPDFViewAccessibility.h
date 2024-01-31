@interface WebPDFViewAccessibility : __WebPDFViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityContainer;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)a0;
- (id)accessibilityRootElement;
- (id)_accessibilityPages;
- (BOOL)hasSpaces:(struct CGPDFTextString { } *)a0;

@end
