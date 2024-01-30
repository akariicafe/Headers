@class NSDate, CADisplayLink, CAShapeLayer;

@interface BKUIPearlPositioningGuideView : UIView {
    CADisplayLink *_displayLink;
    BOOL _startMaskFromCenter;
    double _startLineWidth;
    double _startEdgeDistance;
    double _startCornerRadius;
    double _startPostCornerLength;
    double _startLineAlpha;
    struct CGPoint { double x; double y; } _startPortalCenter;
    double _targetLineWidth;
    double _targetEdgeDistance;
    double _targetCornerRadius;
    double _targetPostCornerLength;
    double _targetLineAlpha;
    struct CGPoint { double x; double y; } _targetPortalCenter;
    double _lastAnimationTickProgres;
}

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
- (double)_minDistance;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (double)_maxDistance;
- (void)breathe;
- (void)_stopDisplay;
- (void)_startDisplay;
- (void)_displayTick;
- (void)_startAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)animateToOpenValuesOverDuration:(double)a0 curve:(long long)a1 completion:(id /* block */)a2;
- (void)animateToBreatheOutValuesOverDuration:(double)a0 completion:(id /* block */)a1;
- (id)_roundedRectMaskForMaskDistance:(double)a0 portalCenter:(struct CGPoint { double x0; double x1; })a1 cornerRadius:(double)a2;
- (double)_updatedFloatWithTarget:(double)a0 current:(double)a1 start:(double)a2 progress:(double)a3;
- (void)resetValuesToStart;
- (void)animateToPopOutValuesOverDuration:(double)a0 completion:(id /* block */)a1;
- (void)animateToFinishedValuesOverDuration:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)prepareMaskLayerForStartToOpenTransition;
- (void)prepareMaskLayerForReducedMotionOpenTransition;

@end
