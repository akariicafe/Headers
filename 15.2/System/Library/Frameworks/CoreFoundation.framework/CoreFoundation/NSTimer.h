@class NSDate;

@interface NSTimer : NSObject

@property (copy) NSDate *fireDate;
@property (readonly) double timeInterval;
@property double tolerance;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly, retain) id userInfo;

+ (id)scheduledTimerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4;
+ (id)timerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4;
+ (id)scheduledTimerWithTimeInterval:(double)a0 invocation:(id)a1 repeats:(BOOL)a2;
+ (id)scheduledTimerWithTimeInterval:(double)a0 repeats:(BOOL)a1 block:(id /* block */)a2;
+ (id)timerWithTimeInterval:(double)a0 invocation:(id)a1 repeats:(BOOL)a2;
+ (id)timerWithTimeInterval:(double)a0 repeats:(BOOL)a1 block:(id /* block */)a2;
+ (id)timerWithFireDate:(id)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (double)_cffireTime;
- (double)timeInterval;
- (long long)order;
- (void)setFireTime:(double)a0;
- (double)tolerance;
- (double)fireTime;
- (struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; })context;
- (id)userInfo;
- (id)initWithFireDate:(id)a0 interval:(double)a1 repeats:(BOOL)a2 block:(id /* block */)a3;
- (void)setTolerance:(double)a0;
- (void)setFireDate:(id)a0;
- (id)fireDate;
- (struct __CFString { } *)copyDebugDescription;
- (double)interval;
- (void)invalidate;
- (void)fire;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;

@end
