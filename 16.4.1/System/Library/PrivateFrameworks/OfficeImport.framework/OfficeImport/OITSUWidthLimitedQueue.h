@class NSObject;
@protocol OS_dispatch_queue;

@interface OITSUWidthLimitedQueue : NSObject {
    int mReaderCount;
    int mLimit;
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } mUnfairLock;
}

- (void)performAsync:(id /* block */)a0;
- (void)dealloc;
- (id)initWithLimit:(unsigned long long)a0;
- (id)init;
- (void)performSync:(id /* block */)a0;
- (id)targetDispatchQueue;

@end
