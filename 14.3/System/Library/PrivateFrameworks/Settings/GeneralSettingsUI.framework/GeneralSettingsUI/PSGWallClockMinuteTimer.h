@class NSTimer;

@interface PSGWallClockMinuteTimer : NSObject {
    id _target;
    SEL _action;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)startTimer;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)_fireAction;
- (void)invalidate;

@end
