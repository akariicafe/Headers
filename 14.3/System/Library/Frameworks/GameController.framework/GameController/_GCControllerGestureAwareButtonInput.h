@class _GCSetValueEvent, NSMutableArray;

@interface _GCControllerGestureAwareButtonInput : GCControllerButtonInput {
    NSMutableArray *_multiPressEventQueue;
    _GCSetValueEvent *_longPressDownEvent;
    float _realValue;
}

@property (nonatomic) long long actualSystemGestureState;
@property (nonatomic) float longPressInterval;
@property (nonatomic) float multiPressInterval;
@property (nonatomic) int requiredMultiPressCount;
@property (copy, nonatomic) id /* block */ longPressHandler;
@property (copy, nonatomic) id /* block */ multiPressHandler;
@property (nonatomic, getter=isLongPressMuted) BOOL longPressMuted;
@property (nonatomic, getter=isMultiPressMuted) BOOL multiPressMuted;
@property (nonatomic, getter=isLongPressEnabled) BOOL longPressEnabled;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (void)setValue:(float)a0;
- (BOOL)_setValue:(float)a0 queue:(id)a1;
- (BOOL)_commitPendingValueOnQueue:(id)a0;
- (id)initWithDescriptionName:(id)a0;
- (void)registerSetValueEvent:(float)a0 queue:(id)a1;
- (void)__onqueue_executeMultiPressRecognizerForEvent:(id)a0 queue:(id)a1;
- (void)__onqueue_forwardEvent:(id)a0 queue:(id)a1;
- (void)__onqueue_executeLongPressRecognizerForEvent:(id)a0 queue:(id)a1;

@end
