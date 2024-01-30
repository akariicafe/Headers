@class NSObject;
@protocol OS_dispatch_queue;

@interface TSDTilingLimitedQueue : NSObject {
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    unsigned long long mLimit;
    unsigned long long mReaderCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mSpinLock;
}

- (void)performAsync:(id /* block */)a0;
- (void)dealloc;
- (id)initWithLimit:(unsigned long long)a0;
- (id)init;

@end
