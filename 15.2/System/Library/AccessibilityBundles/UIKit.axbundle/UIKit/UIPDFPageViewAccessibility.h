@interface UIPDFPageViewAccessibility : __UIPDFPageViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (id)accessibilityPageContent;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityContentForLineNumber:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForLineNumber:(long long)a0;
- (BOOL)isAccessibilityElement;

@end
