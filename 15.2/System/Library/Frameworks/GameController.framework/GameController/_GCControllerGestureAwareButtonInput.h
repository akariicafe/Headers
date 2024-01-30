@class _GCSetValueEvent, NSMutableArray;

@interface _GCControllerGestureAwareButtonInput : GCControllerButtonInput {
    NSMutableArray *_doublePressEventQueue;
    _GCSetValueEvent *_longPressDownEvent;
    _GCSetValueEvent *_singlePressDownEvent;
    float _realValue;
    int _requiredDoublePressCount;
    BOOL _useActualSystemGestureState;
    long long _actualSystemGestureState;
    long long _preferredSystemGestureState;
}

@property (nonatomic) long long actualSystemGestureState;
@property (nonatomic) float longPressInterval;
@property (nonatomic) float singlePressInterval;
@property (nonatomic) float doublePressInterval;
@property (copy, nonatomic) id /* block */ longPressHandler;
@property (copy, nonatomic) id /* block */ doublePressHandler;
@property (copy, nonatomic) id /* block */ singlePressHandler;
@property (nonatomic, getter=isLongPressMuted) BOOL longPressMuted;
@property (nonatomic, getter=isDoublePressMuted) BOOL doublePressMuted;
@property (nonatomic, getter=isSinglePressMuted) BOOL singlePressMuted;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL inputDisabledBySystem;

- (void)setValue:(float)a0;
- (void).cxx_destruct;
- (long long)preferredSystemGestureState;
- (void)setPreferredSystemGestureState:(long long)a0;
- (BOOL)_setValue:(float)a0 queue:(id)a1;
- (BOOL)_commitPendingValueOnQueue:(id)a0;
- (id)initWithDescriptionName:(id)a0;
- (BOOL)isDoublePressGestureRecognizerEnabled;
- (BOOL)isSinglePressGestureRecognizerEnabled;
- (BOOL)isLongPressGestureRecognizerEnabled;
- (void)registerSetValueEvent:(float)a0 queue:(id)a1;
- (void)__onqueue_executeDoublePressRecognizerForEvent:(id)a0 queue:(id)a1;
- (void)__onqueue_forwardEvent:(id)a0 queue:(id)a1;
- (void)__onqueue_executeSinglePressRecognizerForEvent:(id)a0 queue:(id)a1;
- (void)__onqueue_executeLongPressRecognizerForEvent:(id)a0 queue:(id)a1;

@end
