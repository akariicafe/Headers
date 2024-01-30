@interface NSCFOutputStream : NSOutputStream

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)close;
- (id)streamError;
- (oneway void)release;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)initToFileAtPath:(id)a0 append:(BOOL)a1;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (BOOL)allowsWeakReference;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)initToMemory;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (BOOL)retainWeakReference;
- (void)setDelegate:(id)a0;
- (void)open;
- (BOOL)hasSpaceAvailable;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (unsigned long long)streamStatus;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (id)delegate;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;

@end
