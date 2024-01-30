@class NSObject;
@protocol OS_xpc_object;

@interface CKContextSemaphore : NSObject <NSSecureCoding> {
    BOOL _semaOwner;
    unsigned int _sema;
    unsigned long long _shmSize;
    struct { _Atomic unsigned int x0; _Atomic unsigned int x1; _Atomic unsigned int x2; _Atomic unsigned int x3; _Atomic int x4; _Atomic unsigned int x5; _Atomic unsigned long long x6; _Atomic unsigned int x7; _Atomic unsigned int x8; } *_shm;
    NSObject<OS_xpc_object> *_shmObject;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (void)notify;
- (BOOL)busy;
- (void).cxx_destruct;
- (void)resetPending;
- (void)incPending;
- (void)dealloc;
- (long long)waitFor:(double)a0;
- (BOOL)tryAcquire;
- (id)initWithCoder:(id)a0;
- (unsigned long long)numAcquired;
- (unsigned long long)gauge;
- (long long)pending;
- (unsigned long long)sharedMemorySize;
- (void)notifyAll;
- (unsigned long long)pendingExceptionsCount;
- (id)initSemaphoreForXPCService;
- (void)decPending;
- (void)setActiveGauge:(unsigned long long)a0;
- (unsigned long long)requestsServed;
- (unsigned long long)activeGauge;
- (void)encodeWithCoder:(id)a0;

@end
