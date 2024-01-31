@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol> {
    BOOL _isHeader;
    long long _section;
    NSMutableArray *_children;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)dealloc;
- (id)accessibilityElements;
- (id)accessibilityIdentifier;
- (id)initWithAccessibilityContainer:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityIsNotFirstElement;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)accessibilityScrollToVisible;
- (void)accessibilityScrollToVisibleWithChild:(id)a0;
- (void)_acccessibilityClearChildCache;
- (void)updateMockView:(id)a0;
- (id)_textChildWithTitle:(id)a0;

@end
