@class UIView;

@interface UIAccessibilityElementMockSlider : UIAccessibilityElement {
    UIView *_view;
    id _delegate;
}

- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityScroll:(long long)a0;
- (void).cxx_destruct;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })_accessibilityMinScrubberPosition;
- (struct CGPoint { double x0; double x1; })_accessibilityMaxScrubberPosition;

@end
