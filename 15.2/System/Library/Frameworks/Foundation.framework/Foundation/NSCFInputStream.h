@interface NSCFInputStream : NSInputStream

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)close;
- (BOOL)allowsWeakReference;
- (id)initWithURL:(id)a0;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (id)initWithFileAtPath:(id)a0;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (void)open;
- (id)initWithData:(id)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)retain;
- (void)setDelegate:(id)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasBytesAvailable;
- (BOOL)isEqual:(id)a0;
- (id)delegate;
- (id)streamError;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (unsigned long long)streamStatus;
- (unsigned long long)hash;
- (oneway void)release;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (id)propertyForKey:(id)a0;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;

@end
