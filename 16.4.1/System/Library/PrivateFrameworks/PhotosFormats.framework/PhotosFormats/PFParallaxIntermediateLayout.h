@class NSString;

@interface PFParallaxIntermediateLayout : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inactiveRect;
@property (readonly, nonatomic) unsigned long long zoomStrategy;
@property (readonly, nonatomic) unsigned long long overlapStrategy;
@property (readonly, nonatomic) unsigned long long parallaxStrategy;
@property (readonly, nonatomic) unsigned long long inactiveStrategy;
@property (readonly, nonatomic) double cropScore;
@property (readonly, nonatomic) double layoutScore;
@property (readonly, nonatomic) double timeBottomOverlap;
@property (readonly, nonatomic) double timeTopOverlap;
@property (readonly, nonatomic) double unsafeAreaOverlap;
@property (readonly, nonatomic) double uninflatedUnsafeAreaOverlap;
@property (readonly, nonatomic) NSString *debugStub;

- (id)debugDescription;
- (double)clockOverlapAcceptabilityForLayoutConfiguration:(id)a0 inflated:(BOOL)a1;
- (BOOL)clockOverlapAcceptableForLayoutConfiguration:(id)a0;
- (id)initWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inactiveRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomStrategy:(unsigned long long)a2 overlapStrategy:(unsigned long long)a3 parallaxStrategy:(unsigned long long)a4 inactiveStrategy:(unsigned long long)a5;
- (id)initWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inactiveRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomStrategy:(unsigned long long)a2 overlapStrategy:(unsigned long long)a3 parallaxStrategy:(unsigned long long)a4 inactiveStrategy:(unsigned long long)a5 cropScore:(double)a6 layoutScore:(double)a7 timeBottomOverlap:(double)a8 timeTopOverlap:(double)a9 unsafeAreaOverlap:(double)a10 uninflatedUnsafeAreaOverlap:(double)a11;

@end
