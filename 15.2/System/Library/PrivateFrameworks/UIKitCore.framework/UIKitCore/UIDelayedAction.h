@class NSTimer, NSString, NSDate;

@interface UIDelayedAction : NSObject {
    SEL m_action;
    double m_delay;
    NSTimer *m_timer;
    NSString *m_runLoopMode;
}

@property (readonly) NSDate *_startDate;
@property (readonly) BOOL _canceled;
@property (retain) id target;
@property (retain) id userInfo;

- (double)delay;
- (void)touch;
- (void)unschedule;
- (void)timerFired:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1 userInfo:(id)a2 delay:(double)a3;
- (void).cxx_destruct;
- (BOOL)scheduled;
- (id)init;
- (id)initWithTarget:(id)a0 action:(SEL)a1 userInfo:(id)a2 delay:(double)a3 mode:(id)a4;
- (void)touchWithDelay:(double)a0;
- (void)dealloc;
- (void)cancel;

@end
