@interface PDFThumbnailViewAccessibility : __PDFThumbnailViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (id)_accessibilityUserTestingChildren;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)_axMoveOnePage:(BOOL)a0;
- (long long)_axCurrentPageNumber;
- (id)_axIconsView;
- (id)_axPageDescriptionForPage:(id)a0;
- (long long)_axPageNumberForPage:(id)a0;
- (id)_axThumbnailSelf;

@end
