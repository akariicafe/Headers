@class NSTimer, CLTimer, NSRunLoop;

@interface CLRunLoopTimerScheduler : NSObject <CLTimerScheduler>

@property (retain, nonatomic) NSTimer *underlyingTimer;
@property (copy, nonatomic) id /* block */ fireBlock;
@property (retain, nonatomic) NSRunLoop *runloop;
@property (weak, nonatomic) CLTimer *timer;

- (void).cxx_destruct;
- (void)dealloc;
- (void)reflectNextFireDelay:(double)a0 fireInterval:(double)a1;
- (id)initWithRunLoopSilo:(id)a0;

@end
