@interface CAMDescriptionOverlayViewAccessibility : __CAMDescriptionOverlayViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityViewIsModal;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)_accessibilitySupplementaryFooterViews;

@end
