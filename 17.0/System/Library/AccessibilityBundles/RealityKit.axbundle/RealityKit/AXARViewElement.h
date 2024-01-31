@interface AXARViewElement : UIAccessibilityElement

@property (readonly, nonatomic) id entityWrapper;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingRect;
- (BOOL)accessibilityActivate;
- (id)accessibilityCustomRotors;
- (id)accessibilityCustomContent;
- (id)_accessibilityScrollStatus;
- (id)_arView;
- (id)initWithAccessibilityContainer:(id)a0 entityWrapper:(id)a1;

@end
