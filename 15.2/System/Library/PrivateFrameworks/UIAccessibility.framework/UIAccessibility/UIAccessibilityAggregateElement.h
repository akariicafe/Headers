@class NSArray;

@interface UIAccessibilityAggregateElement : UIAccessibilityElement

@property (retain, nonatomic) NSArray *representedElements;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (id)initWithAccessibilityContainer:(id)a0;
- (id)accessibilityLabel;
- (id)initWithAccessibilityContainer:(id)a0 representedElements:(id)a1;
- (void)addRepresentedObject:(id)a0;

@end
