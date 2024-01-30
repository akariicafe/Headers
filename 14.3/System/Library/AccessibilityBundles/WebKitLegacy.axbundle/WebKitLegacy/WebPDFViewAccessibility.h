@interface WebPDFViewAccessibility : __WebPDFViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (void)dealloc;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (id)accessibilityContainer;
- (id)accessibilityRootElement;
- (BOOL)hasSpaces:(struct CGPDFTextString { } *)a0;
- (id)_accessibilityPages;

@end
