@class NSObject;
@protocol OS_dispatch_queue;

@interface OITSUWidthLimitedQueue : NSObject {
    int mReaderCount;
    int mLimit;
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mUnfairLock;
}

- (id)init;
- (void)dealloc;
- (void)performSync:(id /* block */)a0;
- (id)initWithLimit:(unsigned long long)a0;
- (void)performAsync:(id /* block */)a0;
- (id)targetDispatchQueue;

@end
