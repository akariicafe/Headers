@interface WebPDFViewAccessibility : __WebPDFViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (long long)accessibilityElementCount;
- (id)accessibilityContainer;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void)dealloc;
- (id)accessibilityRootElement;
- (BOOL)hasSpaces:(struct CGPDFTextString { } *)a0;
- (id)_accessibilityPages;

@end
