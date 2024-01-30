@class NSArray;

@interface UIAccessibilityAggregateElement : UIAccessibilityElement

@property (retain, nonatomic) NSArray *representedElements;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)initWithAccessibilityContainer:(id)a0 representedElements:(id)a1;
- (void)addRepresentedObject:(id)a0;
- (id)initWithAccessibilityContainer:(id)a0;

@end
