@interface UIPDFPageViewAccessibility : __UIPDFPageViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)isAccessibilityElement;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityContentForLineNumber:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForLineNumber:(long long)a0;
- (id)accessibilityPageContent;
- (unsigned long long)accessibilityTraits;
- (struct CGPDFPage { } *)_axPageRef;
- (id)_axLineSelections;
- (struct CGPDFSelection { } *)_lineSelectionForSelection:(struct CGPDFSelection { } *)a0;

@end
