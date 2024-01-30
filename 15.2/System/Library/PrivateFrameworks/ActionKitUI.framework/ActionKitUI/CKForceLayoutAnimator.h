@class UIColor, NSMapTable, CADisplayLink, NSMutableSet, UIView, CAShapeLayer;

@interface CKForceLayoutAnimator : NSObject {
    CADisplayLink *_displayLink;
    NSMapTable *_weights;
    NSMapTable *_previousCenters;
    NSMapTable *_fixedNodes;
    CAShapeLayer *_linesLayer;
}

@property (readonly, nonatomic) UIView *referenceView;
@property (readonly, nonatomic) NSMutableSet *nodes;
@property (readonly, nonatomic) NSMutableSet *links;
@property (nonatomic) double linkDistance;
@property (nonatomic) double linkStrength;
@property (nonatomic) double friction;
@property (nonatomic) double charge;
@property (nonatomic) double chargeDistance;
@property (nonatomic) double theta;
@property (nonatomic) double gravity;
@property (nonatomic) double alpha;
@property (copy, nonatomic) UIColor *lineColor;
@property (nonatomic) double lineWidth;

- (void)removeNode:(id)a0;
- (void)addNode:(id)a0;
- (void)removeAllNodes;
- (void)tick;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (id)initWithReferenceView:(id)a0;
- (void)stop;
- (void)linkNode:(id)a0 toNode:(id)a1;
- (void)unlinkNode:(id)a0 fromNode:(id)a1;
- (void)fixNode:(id)a0 atPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)releaseNode:(id)a0;

@end
