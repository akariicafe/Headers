@class NSString, NSMutableSet, NSMutableArray, AXVKExplorationVertexElement;

@interface VKMapDebugView : UIView

@property (retain, nonatomic) NSMutableArray *buildingPaths;
@property (nonatomic) struct CGPoint { double x; double y; } currentPoint;
@property (nonatomic) struct CGPoint { double x; double y; } frontierPoint;
@property (retain, nonatomic) NSMutableSet *intersectionPoints;
@property (retain, nonatomic) NSMutableArray *poiPaths;
@property (retain, nonatomic) NSMutableArray *roadPaths;
@property (retain, nonatomic) NSMutableArray *roadPoints;
@property (retain, nonatomic) AXVKExplorationVertexElement *currentExplorationElement;
@property (copy, nonatomic) NSString *debugMessage;

+ (id)sharedInstance;

- (void)_orientationDidChange:(id)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)removeExplorationPointsAndPaths;
- (void)_addValidPaths:(id)a0 array:(id)a1;
- (void)addBuildingPaths:(id)a0;
- (void)addIntersectionPoints:(id)a0;
- (void)addPOIPaths:(id)a0;
- (void)addRoadPaths:(id)a0;
- (void)addRoadPoints:(id)a0;
- (void)removePointsAndPaths;
- (void)setCurrentExplorationVertex:(id)a0;
- (void)setCurrentPoint:(struct CGPoint { double x0; double x1; })a0 frontierPoint:(struct CGPoint { double x0; double x1; })a1;

@end
