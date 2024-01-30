@class NSString, NSObservation, CADisplayLink, _UITouchesObservingGestureRecognizer, UIView, NSSet;

@interface _UITouchForceObservable : NSObservationSource <NSObserver> {
    UIView *_view;
    long long _observerCount;
    _UITouchesObservingGestureRecognizer *_gestureRecognizer;
    NSObservation *_touchesObservation;
    CADisplayLink *_continuousEvaluationDisplayLink;
    NSSet *_currentTouches;
    double _lastObservationTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveObservedValue:(id)a0;
- (id)_touchForceMessageForTouches:(id)a0;
- (double)_unclampedTouchForceForTouches:(id)a0;
- (id)initWithView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_didEndHavingAnyObservers;
- (void)removeObservation:(id)a0;
- (void)dealloc;
- (void)_willBeginHavingAnyObservers;
- (void)_updateForContinuousEvaluation:(id)a0;
- (id)addObserver:(id)a0;
- (double)_maximumPossibleForceForTouches:(id)a0;
- (double)_timestampForTouches:(id)a0;
- (BOOL)_shouldFilterDueToSystemGesturesForTouches:(id)a0;
- (void)_cancelContinuousEvaluation;

@end
