@interface __NSCFTimer : NSTimer

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)fireDate;
- (void)setTolerance:(double)a0;
- (void)setFireDate:(id)a0;
- (double)tolerance;
- (void)fire;
- (id)userInfo;
- (id)init;
- (unsigned long long)_cfTypeID;
- (double)timeInterval;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (BOOL)isValid;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (void)invalidate;

@end
