@class AXVKExplorationVertexElement;

@interface VKExplorationAccessibilityElement : UIAccessibilityElement

@property (retain, nonatomic) AXVKExplorationVertexElement *vertex;
@property (nonatomic) BOOL isExplorationElement;

- (BOOL)isCurrent;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (id)accessibilityPath;
- (id)accessibilityPaths;
- (id)initWithAccessibilityContainer:(id)a0 andVertex:(id)a1;

@end
