@protocol _UIRepeatingGestureClockDelegate;

@interface _UIRepeatingGestureClock : NSObject {
    unsigned long long _delayIndex;
    BOOL _timerOn;
}

@property (weak, nonatomic) id<_UIRepeatingGestureClockDelegate> delegate;

- (void)_scheduleTimer;
- (void)dealloc;
- (void)_cancelTimer;
- (void).cxx_destruct;
- (void)_createTick:(id)a0;
- (void)_performTick:(id)a0;
- (void)startClock;
- (void)stopClock;

@end
