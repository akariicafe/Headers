@class NSInputStream;

@interface WFFileChunkInputStream : NSInputStream

@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long length;

- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(const struct __CFString { } *)a1;
- (void)close;
- (id)streamError;
- (void).cxx_destruct;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(const struct __CFString { } *)a1;
- (id)propertyForKey:(id)a0;
- (void)open;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (unsigned long long)streamStatus;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (BOOL)hasBytesAvailable;
- (id)initWithURL:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2;

@end
