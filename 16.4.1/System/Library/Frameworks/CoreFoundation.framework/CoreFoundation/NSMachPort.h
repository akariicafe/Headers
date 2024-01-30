@protocol NSMachPortDelegate;

@interface NSMachPort : NSPort {
    id<NSMachPortDelegate> _delegate;
    unsigned long long _flags;
    unsigned long long _retainCount;
}

@property (readonly) unsigned int machPort;

+ (id)port;
+ (void)_fixNSMachPortLeak;
+ (id)portWithMachPort:(unsigned int)a0;
+ (id)portWithMachPort:(unsigned int)a0 options:(unsigned long long)a1;
+ (void)resetAllPorts;
+ (BOOL)sendBeforeTime:(double)a0 streamData:(id)a1 components:(id)a2 to:(id)a3 from:(id)a4 msgid:(unsigned int)a5 reserved:(unsigned long long)a6;

- (id)retain;
- (id)delegate;
- (unsigned long long)_cfTypeID;
- (oneway void)release;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)_tryRetain;
- (BOOL)isValid;
- (void)setDelegate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isDeallocating;
- (BOOL)isKindOfClass:(Class)a0;
- (id)init;
- (void)invalidate;
- (BOOL)isMemberOfClass:(Class)a0;
- (unsigned long long)retainCount;
- (id)initWithMachPort:(unsigned int)a0;
- (id)initWithMachPort:(unsigned int)a0 options:(unsigned long long)a1;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (BOOL)sendBeforeTime:(double)a0 streamData:(void *)a1 components:(id)a2 from:(id)a3 msgid:(unsigned int)a4;
- (id)_delegate;
- (void)_setDelegate:(id)a0;
- (unsigned int)machPort;
- (void)_decreaseRetainCountAndMaybeDeallocWithLock:(struct os_unfair_lock_s { unsigned int x0; } *)a0 andPerformWhenZero:(id /* block */)a1;
- (unsigned long long)_flags;
- (void)_increaseRetainCountWithLock:(struct os_unfair_lock_s { unsigned int x0; } *)a0;
- (unsigned int)_machPort;
- (unsigned long long)_retainCount;
- (void)_setFlags:(unsigned long long)a0;
- (void)_setMachPort:(unsigned int)a0;

@end
