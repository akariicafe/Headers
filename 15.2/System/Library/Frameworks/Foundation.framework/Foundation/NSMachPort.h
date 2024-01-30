@interface NSMachPort : NSPort {
    id _delegate;
    unsigned long long _flags;
    unsigned int _machPort;
    unsigned long long _reserved;
}

@property (readonly) unsigned int machPort;

+ (id)portWithMachPort:(unsigned int)a0;
+ (BOOL)sendBeforeTime:(double)a0 streamData:(id)a1 components:(id)a2 to:(id)a3 from:(id)a4 msgid:(unsigned int)a5 reserved:(unsigned long long)a6;
+ (void)resetAllPorts;
+ (id)portWithMachPort:(unsigned int)a0 options:(unsigned long long)a1;
+ (void)_fixNSMachPortLeak;
+ (id)port;

- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (id)initWithMachPort:(unsigned int)a0;
- (BOOL)sendBeforeTime:(double)a0 streamData:(void *)a1 components:(id)a2 from:(id)a3 msgid:(unsigned int)a4;
- (BOOL)isKindOfClass:(Class)a0;
- (unsigned long long)retainCount;
- (BOOL)isMemberOfClass:(Class)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)retain;
- (void)setDelegate:(id)a0;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (unsigned long long)_cfTypeID;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)delegate;
- (void)invalidate;
- (unsigned long long)hash;
- (id)initWithMachPort:(unsigned int)a0 options:(unsigned long long)a1;
- (BOOL)_tryRetain;
- (oneway void)release;
- (BOOL)isValid;

@end
