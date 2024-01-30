@class NSMutableDictionary, NSTimer, NSMapTable, UIGestureRecognizerTransformAnalyzer, SBTouchTemplate, SBPolygon;
@protocol SBTouchTemplateGestureRecognizerDelegate;

@interface SBTouchTemplateGestureRecognizer : UIGestureRecognizer {
    BOOL _recognitionBegan;
}

@property (readonly, nonatomic) NSMutableDictionary *templatesForTouchType;
@property (readonly, nonatomic, getter=_initialTouchPointMap) NSMapTable *initialTouchPointMap;
@property (nonatomic, getter=_failedRecognitionAttempts, setter=_setFailedRecognitionAttempts:) unsigned long long failedRecognitionAttempts;
@property (nonatomic, getter=_trackingTouchCount, setter=_setTrackingTouchCount:) unsigned long long trackingTouchCount;
@property (nonatomic, getter=_cumulativeMotion, setter=_setCumulativeMotion:) double cumulativeMotion;
@property (nonatomic, getter=_cumulativeMotionEnvelope, setter=_setCumulativeMotionEnvelope:) double cumulativeMotionEnvelope;
@property (nonatomic, getter=_smoothedIncrementalMotion, setter=_setSmoothedIncrementalMotion:) double smoothedIncrementalMotion;
@property (retain, nonatomic, setter=_setNoChangeCancellationTimer:) NSTimer *_noChangeCancellationTimer;
@property (nonatomic) double animationDistance;
@property (nonatomic) long long requiredDirectionality;
@property (readonly, nonatomic) UIGestureRecognizerTransformAnalyzer *transformAnalyzer;
@property (retain, nonatomic, getter=_matchedTemplate, setter=_setMatchedTemplate:) SBTouchTemplate *matchedTemplate;
@property (retain, nonatomic, getter=_matchedPolygon, setter=_setMatchedPolygon:) SBPolygon *matchedPolygon;
@property (weak, nonatomic) id<SBTouchTemplateGestureRecognizerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long sequenceNumber;
@property (readonly, nonatomic) double cumulativePercentage;

- (void)_reset;
- (id)logCategory;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_log:(id)a0;
- (void)reset;
- (void)log:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setState:(long long)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (double)incrementalGestureMotionForCandidate:(id)a0 withTransformAnalyzerInfo:(id)a1;
- (void)_computeGestureMotionWithTouches:(id)a0 polygon:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldAddNewTouchesAfterGestureRecognition;
- (double)_projectedMotionForInterval:(double)a0;
- (BOOL)_directionallyAcceptMotion:(double)a0;
- (void)_updateMatchedTemplateForTouchesBeganOrEnded:(id)a0;
- (void)_pingNoChangeCancellationTimer;
- (void)_updateForTouchesBeganOrMoved:(id)a0;
- (id)_polygonForTouches:(id)a0;
- (void)_updateForTouchesCancelledOrEnded:(id)a0 state:(long long)a1 withEvent:(id)a2;
- (void)_noChangeCancellationTimerFired:(id)a0;
- (void)_failMeForReason:(id)a0;
- (void)_attemptTemplateMatchWithTouches:(id)a0 polygon:(id)a1;
- (id)templatesForTouchType:(long long)a0;
- (id)_touchesByFilteringRestingTrackpadTouches:(id)a0;
- (id)_matchedTemplateForTouches:(id)a0 polygon:(id)a1;
- (BOOL)hasSignificantMotionToBegin;
- (void)_invalidateNoChangeCancellationTimer;
- (void)_resetNoChangeCancellationTimer;
- (long long)projectedCompletionTypeForInterval:(double)a0;
- (void)setTemplates:(id)a0 forTouchType:(long long)a1;

@end
