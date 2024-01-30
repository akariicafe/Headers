@interface NSCFTimer : NSTimer

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (void)setTolerance:(double)a0;
- (unsigned long long)_cfTypeID;
- (void)setFireDate:(id)a0;
- (id)fireDate;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (double)tolerance;
- (void)fire;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;
- (double)timeInterval;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)userInfo;
- (id)init;
- (BOOL)retainWeakReference;
- (void)invalidate;
- (unsigned long long)retainCount;

@end
