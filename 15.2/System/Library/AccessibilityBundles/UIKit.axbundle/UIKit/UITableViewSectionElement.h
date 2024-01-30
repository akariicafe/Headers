@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol> {
    BOOL _isHeader;
    long long _section;
    NSMutableArray *_children;
}

- (id)accessibilityIdentifier;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)initWithAccessibilityContainer:(id)a0;
- (id)accessibilityElements;
- (void)dealloc;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)accessibilityScrollToVisibleWithChild:(id)a0;
- (BOOL)accessibilityScrollToVisible;
- (BOOL)_accessibilityIsNotFirstElement;
- (void)updateMockView:(id)a0;
- (void)_acccessibilityClearChildCache;
- (id)_textChildWithTitle:(id)a0;

@end
