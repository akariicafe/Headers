@interface NSMessagePort : NSPort {
    void *_port;
    id _delegate;
}

+ (BOOL)sendBeforeTime:(double)a0 streamData:(id)a1 components:(id)a2 to:(id)a3 from:(id)a4 msgid:(unsigned int)a5 reserved:(unsigned long long)a6;
+ (void)_fixNSMessagePortLeak;

- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (BOOL)sendBeforeTime:(double)a0 streamData:(void *)a1 components:(id)a2 from:(id)a3 msgid:(unsigned int)a4;
- (unsigned long long)retainCount;
- (BOOL)setName:(id)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)retain;
- (void)setDelegate:(id)a0;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)_isDeallocating;
- (id)initWithName:(id)a0;
- (id)init;
- (id)delegate;
- (void)invalidate;
- (id)name;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)initWithRemoteName:(id)a0;
- (BOOL)isValid;

@end
