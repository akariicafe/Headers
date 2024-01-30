@class UIView;

@interface AXPlatterContentMockElement : UIAccessibilityElement {
    id _sourceElement;
    UIView *_sourceView;
}

- (BOOL)accessibilityRespondsToUserInteraction;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)description;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityLabel;

@end
