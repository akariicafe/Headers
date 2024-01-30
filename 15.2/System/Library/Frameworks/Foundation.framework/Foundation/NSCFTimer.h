@interface NSCFTimer : NSTimer

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (double)timeInterval;
- (double)tolerance;
- (BOOL)allowsWeakReference;
- (id)userInfo;
- (unsigned long long)retainCount;
- (void)setTolerance:(double)a0;
- (BOOL)retainWeakReference;
- (void)setFireDate:(id)a0;
- (id)retain;
- (id)fireDate;
- (unsigned long long)_cfTypeID;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)invalidate;
- (void)fire;
- (unsigned long long)hash;
- (oneway void)release;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;
- (BOOL)isValid;

@end
