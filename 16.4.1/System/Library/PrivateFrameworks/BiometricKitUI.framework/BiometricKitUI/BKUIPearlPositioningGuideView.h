@class NSDate, CADisplayLink, CAShapeLayer;

@interface BKUIPearlPositioningGuideView : UIView {
    CADisplayLink *_displayLink;
    BOOL _startMaskFromCenter;
}

@property (nonatomic) double startLineWidth;
@property (nonatomic) double startEdgeDistance;
@property (nonatomic) double startCornerRadius;
@property (nonatomic) double startPostCornerLength;
@property (nonatomic) double startLineAlpha;
@property (nonatomic) struct CGPoint { double x; double y; } startPortalCenter;
@property (nonatomic) double targetLineWidth;
@property (nonatomic) double targetEdgeDistance;
@property (nonatomic) double targetCornerRadius;
@property (nonatomic) double targetPostCornerLength;
@property (nonatomic) double targetLineAlpha;
@property (nonatomic) struct CGPoint { double x; double y; } targetPortalCenter;
@property (nonatomic) double lastAnimationTickProgres;
@property (retain, nonatomic) CAShapeLayer *roundedRectMaskLayer;
@property (nonatomic) double lineWidth;
@property (nonatomic) double edgeDistance;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double postCornerLength;
@property (nonatomic) double lineAlpha;
@property (nonatomic) double ringRadius;
@property (nonatomic) struct CGPoint { double x; double y; } portalCenter;
@property (retain, nonatomic) NSDate *animationStart;
@property (nonatomic) double animationDuration;
@property (nonatomic) long long animationCurve;
@property (copy, nonatomic) id /* block */ animationCompletion;
@property (readonly, nonatomic) double minimumMaskLayerDistanceFromCenter;
@property (readonly, nonatomic) double maximumMaskLayerDistanceFromCenter;
@property (nonatomic) BOOL inSheet;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)_maxDistance;
- (double)_minDistance;
- (void)breathe;
- (void)_displayTick;
- (id)_roundedRectMaskForMaskDistance:(double)a0 portalCenter:(struct CGPoint { double x0; double x1; })a1 cornerRadius:(double)a2;
- (void)_startAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)_startDisplay;
- (void)_stopDisplay;
- (void)_updateChildrenValuesForDisplayTickProgress:(double)a0;
- (void)_updateTargetValuesForAnimation:(long long)a0 animationCurve:(long long)a1;
- (double)_updatedFloatWithTarget:(double)a0 current:(double)a1 start:(double)a2 progress:(double)a3;
- (void)animateToBreatheOutValuesOverDuration:(double)a0 completion:(id /* block */)a1;
- (void)animateToFinishedValuesOverDuration:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)animateToOpenValuesOverDuration:(double)a0 curve:(long long)a1 completion:(id /* block */)a2;
- (void)animateToPopOutValuesOverDuration:(double)a0 completion:(id /* block */)a1;
- (BOOL)needsMaskedNeedsPositionStyleEnrollment;
- (void)prepareMaskLayerForReducedMotionOpenTransition;
- (void)prepareMaskLayerForStartToOpenTransition;
- (void)resetValuesToStart;

@end
