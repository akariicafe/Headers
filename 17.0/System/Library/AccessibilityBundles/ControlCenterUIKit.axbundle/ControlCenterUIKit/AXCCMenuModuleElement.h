@interface AXCCMenuModuleElement : UIAccessibilityElement

@property (nonatomic) long long index;
@property (copy, nonatomic) id /* block */ provider;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;

@end
