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

- (id)initWithView:(id)a0;
- (void)_willBeginHavingAnyObservers;
- (id)_touchForceMessageForTouches:(id)a0;
- (void)removeObservation:(id)a0;
- (double)_unclampedTouchForceForTouches:(id)a0;
- (id)addObserver:(id)a0;
- (void)receiveObservedValue:(id)a0;
- (double)_timestampForTouches:(id)a0;
- (void)_updateForContinuousEvaluation:(id)a0;
- (void)_didEndHavingAnyObservers;
- (void).cxx_destruct;
- (id)init;
- (void)_cancelContinuousEvaluation;
- (void)dealloc;
- (BOOL)_shouldFilterDueToSystemGesturesForTouches:(id)a0;
- (double)_maximumPossibleForceForTouches:(id)a0;

@end
