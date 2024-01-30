@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol> {
    NSMutableArray *_children;
}

@property (nonatomic) long long section;
@property (nonatomic) BOOL isHeader;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_accessibilityIsNotFirstElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)description;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithAccessibilityContainer:(id)a0;
- (id)accessibilityIdentifier;
- (void)accessibilityScrollToVisibleWithChild:(id)a0;
- (BOOL)accessibilityScrollToVisible;
- (void)_accessibilityClearChildren;
- (void)updateMockView:(id)a0;
- (id)accessibilityChildren;
- (void)_acccessibilityClearChildCache;
- (id)_textChildWithTitle:(id)a0;
- (id)_accessibilityAccessibleElementsInView:(id)a0;

@end
