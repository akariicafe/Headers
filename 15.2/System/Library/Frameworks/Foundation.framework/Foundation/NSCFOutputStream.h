@interface NSCFOutputStream : NSOutputStream

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)close;
- (id)initToFileAtPath:(id)a0 append:(BOOL)a1;
- (BOOL)allowsWeakReference;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (id)initToMemory;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (void)open;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)retain;
- (void)setDelegate:(id)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)delegate;
- (id)streamError;
- (BOOL)hasSpaceAvailable;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)streamStatus;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (oneway void)release;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (id)propertyForKey:(id)a0;

@end
