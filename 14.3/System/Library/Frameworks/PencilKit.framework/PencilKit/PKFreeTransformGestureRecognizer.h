@class NSMapTable, NSMutableOrderedSet;

@interface PKFreeTransformGestureRecognizer : UIGestureRecognizer

@property (nonatomic) BOOL canBegin;
@property (nonatomic) BOOL isScaling;
@property (nonatomic) BOOL isPanning;
@property (nonatomic) double previousScale;
@property (nonatomic) double deltaScale;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } accumulatedTransform;
@property (retain, nonatomic) NSMapTable *touchStartLocations;
@property (retain, nonatomic) NSMapTable *actualTouchStartLocations;
@property (nonatomic) double startThreshold;
@property (nonatomic) double scaleThreshold;
@property (nonatomic) double cancelThreshold;
@property (nonatomic) unsigned long long allowedPanEdges;
@property (nonatomic) BOOL allowSingleTouchDrag;
@property (nonatomic) BOOL axisAligned;
@property (nonatomic) double minScale;
@property (nonatomic) double maxScale;
@property (nonatomic) double scaleDamping;
@property (readonly, nonatomic) BOOL scaleIsGrowing;
@property (readonly, nonatomic) BOOL scaleIsShrinking;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } freeTransform;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } unscaledFreeTransform;
@property (readonly, nonatomic) NSMutableOrderedSet *touches;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)clearTouches;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })clampTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 minScale:(double)a1 maxScale:(double)a2;
- (void)resetStartingTouches;
- (void)resetAndAccumulateTransform;
- (void)touchesBegan:(id)a0 withEvent:(id)a1 rejectExcessTouches:(BOOL)a2;
- (BOOL)touchesMovedPastThreshold:(double)a0;
- (BOOL)touchesMovedPastScaleThreshold:(double)a0;

@end
