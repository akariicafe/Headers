@interface AX_FunCamFilterCarousel : UIAccessibilityElement

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameInContainerSpace;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;

@end
