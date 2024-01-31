@class UIView;

@interface AXPlatterContentMockElement : UIAccessibilityElement {
    id _sourceElement;
    UIView *_sourceView;
}

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)description;
- (void).cxx_destruct;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;

@end
