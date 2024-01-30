@class UIView;

@interface PLUIAccessibilityMockSlider : UIAccessibilityElement

@property (retain, nonatomic) UIView *view;
@property (weak, nonatomic) id mockSliderDelegate;

- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityScroll:(long long)a0;
- (void).cxx_destruct;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;

@end
