@class UIView;

@interface UIAccessibilityElementMockSlider : UIAccessibilityElement {
    UIView *_view;
    id _delegate;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (BOOL)accessibilityScroll:(long long)a0;
- (struct CGPoint { double x0; double x1; })_accessibilityMaxScrubberPosition;
- (struct CGPoint { double x0; double x1; })_accessibilityMinScrubberPosition;

@end
