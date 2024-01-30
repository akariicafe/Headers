@class NSDate;

@interface NSTimer : NSObject

@property (copy) NSDate *fireDate;
@property (readonly) double timeInterval;
@property double tolerance;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly, retain) id userInfo;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)scheduledTimerWithTimeInterval:(double)a0 invocation:(id)a1 repeats:(BOOL)a2;
+ (id)scheduledTimerWithTimeInterval:(double)a0 repeats:(BOOL)a1 block:(id /* block */)a2;
+ (id)scheduledTimerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4;
+ (id)timerWithFireDate:(id)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3;
+ (id)timerWithTimeInterval:(double)a0 invocation:(id)a1 repeats:(BOOL)a2;
+ (id)timerWithTimeInterval:(double)a0 repeats:(BOOL)a1 block:(id /* block */)a2;
+ (id)timerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4;

- (void)setTolerance:(double)a0;
- (long long)order;
- (void)setFireDate:(id)a0;
- (id)fireDate;
- (double)tolerance;
- (double)interval;
- (void)fire;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;
- (double)timeInterval;
- (double)fireTime;
- (struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; })context;
- (void)setFireTime:(double)a0;
- (id)userInfo;
- (void)invalidate;
- (double)_cffireTime;
- (struct __CFString { } *)copyDebugDescription;
- (id)initWithFireDate:(id)a0 interval:(double)a1 repeats:(BOOL)a2 block:(id /* block */)a3;

@end
