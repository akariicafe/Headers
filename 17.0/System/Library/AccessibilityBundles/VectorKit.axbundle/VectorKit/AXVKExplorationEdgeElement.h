@class NSArray, VKRoadFeatureAccessibilityElement;

@interface AXVKExplorationEdgeElement : AXVKExplorationGraphElement

@property (retain, nonatomic) VKRoadFeatureAccessibilityElement *road;
@property (retain, nonatomic) NSArray *vertices;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRoad:(id)a0 betweenFirstVertex:(id)a1 andSecondVertex:(id)a2;

@end
