@interface NSMachPort : NSPort {
    id _delegate;
    unsigned long long _flags;
    unsigned int _machPort;
    unsigned long long _reserved;
}

@property (readonly) unsigned int machPort;

+ (id)port;
+ (BOOL)sendBeforeTime:(double)a0 streamData:(id)a1 components:(id)a2 to:(id)a3 from:(id)a4 msgid:(unsigned int)a5 reserved:(unsigned long long)a6;
+ (id)portWithMachPort:(unsigned int)a0;
+ (id)portWithMachPort:(unsigned int)a0 options:(unsigned long long)a1;
+ (void)resetAllPorts;
+ (void)_fixNSMachPortLeak;

- (id)init;
- (unsigned long long)_cfTypeID;
- (BOOL)isKindOfClass:(Class)a0;
- (oneway void)release;
- (id)initWithMachPort:(unsigned int)a0 options:(unsigned long long)a1;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (BOOL)isValid;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)retain;
- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (BOOL)isEqual:(id)a0;
- (id)initWithMachPort:(unsigned int)a0;
- (BOOL)sendBeforeTime:(double)a0 streamData:(void *)a1 components:(id)a2 from:(id)a3 msgid:(unsigned int)a4;
- (void)setDelegate:(id)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)invalidate;
- (id)delegate;

@end
