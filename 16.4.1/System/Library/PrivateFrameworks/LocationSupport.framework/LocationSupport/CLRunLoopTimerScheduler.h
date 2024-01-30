@class NSTimer, CLTimer, NSRunLoop;

@interface CLRunLoopTimerScheduler : NSObject <CLTimerScheduler>

@property (retain, nonatomic) NSTimer *underlyingTimer;
@property (copy, nonatomic) id /* block */ fireBlock;
@property (retain, nonatomic) NSRunLoop *runloop;
@property (weak, nonatomic) CLTimer *timer;

- (void)dealloc;
- (void)reflectNextFireDelay:(double)a0 fireInterval:(double)a1;
- (void).cxx_destruct;
- (id)initWithRunLoopSilo:(id)a0;

@end
