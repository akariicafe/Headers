@interface __NSCFOutputStream : NSOutputStream

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)retain;
- (id)delegate;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (unsigned long long)streamStatus;
- (oneway void)release;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasSpaceAvailable;
- (id)propertyForKey:(id)a0;
- (id)streamError;
- (BOOL)_tryRetain;
- (id)initToFileAtPath:(id)a0 append:(BOOL)a1;
- (id)initToMemory;
- (void)open;
- (void)setDelegate:(id)a0;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (void)close;
- (unsigned long long)hash;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;

@end
