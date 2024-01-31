@class UIView;

@interface PLUIAccessibilityMockSlider : UIAccessibilityElement

@property (retain, nonatomic) UIView *view;
@property (weak, nonatomic) id mockSliderDelegate;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (BOOL)accessibilityScroll:(long long)a0;

@end
