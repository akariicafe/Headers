@class SBTouchHistory, NSString;

@interface SBFluidScrunchGestureRecognizer : SBTouchTemplateGestureRecognizer <SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding>

@property (nonatomic) struct CGPoint { double x; double y; } absoluteTranslation;
@property (nonatomic) double absoluteScale;
@property (nonatomic) struct CGPoint { double x; double y; } additionalTranslationDueToChangingAnchorPoints;
@property (nonatomic) double lastPerimeter;
@property (nonatomic) struct CGPoint { double x; double y; } initialCentroid;
@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } centroid;
@property (readonly, nonatomic) long long recognizedTouchType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_scrunchTemplatesForTouchType:(long long)a0;
+ (id)_panTemplatesForTouchType:(long long)a0;

- (double)peakSpeed;
- (double)averageTouchPathAngleOverTimeDuration:(double)a0;
- (id)logCategory;
- (struct CGPoint { double x0; double x1; })translationInView:(id)a0;
- (double)_hysteresis;
- (void)setAllowedTouchTypes:(id)a0;
- (void)_updateRecognizedTouchTypeIfNecessaryWithTouches:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (struct CGPoint { double x0; double x1; })_centroidInGestureViewForPolygon:(id)a0;
- (struct CGPoint { double x0; double x1; })averageTouchVelocityOverTimeDuration:(double)a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_setMatchedPolygon:(id)a0;
- (void)reset;
- (void)_installTemplates;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)_isMatchedTemplateScrunchTemplate;
- (id)_gestureView;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (double)animationDistance;
- (void)setState:(long long)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (double)incrementalGestureMotionForCandidate:(id)a0 withTransformAnalyzerInfo:(id)a1;
- (void)_computeGestureMotionWithTouches:(id)a0 polygon:(id)a1;
- (struct CGPoint { double x0; double x1; })translationWithoutConsideringScaleInView:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldAddNewTouchesAfterGestureRecognition;

@end
