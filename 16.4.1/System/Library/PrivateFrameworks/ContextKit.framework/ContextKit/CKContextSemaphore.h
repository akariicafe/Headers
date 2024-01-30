@class NSObject;
@protocol OS_xpc_object;

@interface CKContextSemaphore : NSObject <NSSecureCoding> {
    BOOL _semaOwner;
    unsigned int _sema;
    unsigned long long _shmSize;
    struct { _Atomic unsigned int x0; _Atomic unsigned int x1; _Atomic unsigned int x2; _Atomic unsigned int x3; _Atomic int x4; _Atomic int x5; _Atomic unsigned long long x6; _Atomic unsigned int x7; _Atomic unsigned int x8; } *_shm;
    NSObject<OS_xpc_object> *_shmObject;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (unsigned long long)sharedMemorySize;
- (long long)pendingExceptionsCount;
- (void)encodeWithCoder:(id)a0;
- (long long)waitFor:(double)a0;
- (unsigned long long)activeGauge;
- (long long)pending;
- (id)initWithCoder:(id)a0;
- (id)initSemaphoreForXPCService;
- (void)notify;
- (unsigned long long)gauge;
- (void)dealloc;
- (void)notifyAll;
- (void)decPending;
- (void)setActiveGauge:(unsigned long long)a0;
- (BOOL)tryAcquireNeedsIncPending:(BOOL)a0;
- (void)resetPending;
- (void)incPending;
- (BOOL)busy;
- (void).cxx_destruct;
- (unsigned long long)requestsServed;
- (unsigned long long)numAcquired;

@end
