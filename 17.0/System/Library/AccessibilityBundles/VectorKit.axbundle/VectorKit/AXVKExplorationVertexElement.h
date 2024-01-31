@class VKMapView, NSMutableArray;

@interface AXVKExplorationVertexElement : AXVKExplorationGraphElement

@property (nonatomic) struct { double latitude; double longitude; } coordinates;
@property (weak, nonatomic) VKMapView *mapView;
@property (nonatomic) BOOL isComputed;
@property (nonatomic) BOOL isCurrent;
@property (nonatomic) BOOL isDeadEnd;
@property (retain, nonatomic) NSMutableArray *edges;
@property (retain, nonatomic) NSMutableArray *neighbors;
@property (retain, nonatomic) NSMutableArray *roads;

- (id)accessibilityLabel;
- (id)description;
- (void).cxx_destruct;
- (id)connectingRoadWith:(id)a0;
- (struct CGPoint { double x0; double x1; })getScreenPoint;
- (id)initWithCoordinates:(struct { double x0; double x1; })a0 betweenRoads:(id)a1;

@end
