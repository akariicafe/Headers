@class NSArray, NSString;

@interface SBFluidSwitcherGestureExclusionCompositeShape : NSObject <SBFluidSwitcherGestureExclusionShape>

@property (retain, nonatomic) NSArray *rects;
@property (nonatomic) BOOL allowHorizontalSwipesInsideShapes;
@property (nonatomic) double topEdgeY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exclusionCompositeShapeWithRects:(id)a0 allowHorizontalSwipes:(BOOL)a1;

- (id)debugView;
- (void).cxx_destruct;
- (BOOL)shouldBeginGestureAtStartingPoint:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
