@class UIView;

@interface UIAccessibilityElementMockSlider : UIAccessibilityElement

@property (retain, nonatomic) UIView *view;
@property (weak, nonatomic) id delegate;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })_accessibilityMinScrubberPosition;
- (struct CGPoint { double x0; double x1; })_accessibilityMaxScrubberPosition;

@end
