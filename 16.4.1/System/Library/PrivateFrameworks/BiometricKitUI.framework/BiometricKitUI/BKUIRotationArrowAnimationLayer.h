@class UIColor, CALayer, CAShapeLayer;

@interface BKUIRotationArrowAnimationLayer : CALayer

@property (nonatomic) double radius;
@property (nonatomic) double arrowAngle;
@property (nonatomic) double arrowlength;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGPoint { double x; double y; } hostCenter;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) CALayer *arrowContainer;
@property (copy, nonatomic) id /* block */ getOrientation;
@property (retain, nonatomic) CAShapeLayer *arrowLayerLeft;
@property (retain, nonatomic) CAShapeLayer *arrowLayerRight;
@property (retain, nonatomic) CAShapeLayer *circleLayer;
@property (retain, nonatomic) CAShapeLayer *rotationLayer;
@property (nonatomic) long long orientation;

+ (id)animatorByEmbedding:(id)a0 color:(id)a1 radiusForOrientation:(id /* block */)a2;
+ (id)animatorWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1 radiusForOrientation:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)resetLayout;
- (void)_animateArrowClockwise:(double)a0 duration:(double)a1 animationDelay:(double)a2;
- (void)_animateArrowCounterClockwise:(double)a0 duration:(double)a1 animationDelay:(double)a2;
- (void)_animateArrowPaths:(double)a0 delay:(double)a1 duration:(double)a2;
- (void)_animateArrowUpsideDown:(double)a0 duration:(double)a1 animationDelay:(double)a2;
- (id)_extendedInit:(struct CGPoint { double x0; double x1; })a0;
- (void)_landscapeAnimationImpl:(double)a0 duration:(double)a1 animationDelay:(double)a2;
- (void)_layoutArrowContainer:(long long)a0;
- (void)_layoutArrowSubLayers;
- (void)_recreateArrow;
- (void)_resetHideCircleLayerStrokeTo:(double)a0;
- (void)_rotateRotationLayerBy:(double)a0 startTime:(double)a1 fromDegree:(unsigned long long)a2 toDegree:(unsigned long long)a3;
- (void)_updateCircleLayerLayout:(long long)a0;
- (void)_zeroOutArrowStroke;
- (void)animateDirectionPath:(double)a0 orientation:(long long)a1 duration:(double)a2 animationDelay:(double)a3;
- (void)enableDebug:(BOOL)a0;
- (id)initWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radiusForOrientation:(id /* block */)a1 arrowAngle:(double)a2 arrowLength:(double)a3 color:(id)a4;
- (void)stopAnimationRemoveStroke;

@end
