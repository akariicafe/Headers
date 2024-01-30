@class UIView;

@interface AXPlatterContentMockElement : UIAccessibilityElement

@property (retain, nonatomic) id sourceElement;
@property (retain, nonatomic) UIView *sourceView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityRespondsToUserInteraction;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)description;
- (id)accessibilityValue;

@end
