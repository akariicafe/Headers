@class NSTimer;

@interface PSGWallClockMinuteTimer : NSObject {
    id _target;
    SEL _action;
    NSTimer *_timer;
}

- (void)startTimer;
- (void)invalidate;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;
- (void)_fireAction;

@end
