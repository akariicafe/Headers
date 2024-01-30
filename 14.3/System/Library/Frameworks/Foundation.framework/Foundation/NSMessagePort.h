@interface NSMessagePort : NSPort {
    void *_port;
    id _delegate;
}

+ (BOOL)sendBeforeTime:(double)a0 streamData:(id)a1 components:(id)a2 to:(id)a3 from:(id)a4 msgid:(unsigned int)a5 reserved:(unsigned long long)a6;
+ (void)_fixNSMessagePortLeak;

- (BOOL)setName:(id)a0;
- (id)init;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (unsigned long long)retainCount;
- (BOOL)isValid;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)retain;
- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (id)initWithRemoteName:(id)a0;
- (id)name;
- (BOOL)sendBeforeTime:(double)a0 streamData:(void *)a1 components:(id)a2 from:(id)a3 msgid:(unsigned int)a4;
- (void)setDelegate:(id)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)initWithName:(id)a0;
- (void)invalidate;
- (id)delegate;

@end
