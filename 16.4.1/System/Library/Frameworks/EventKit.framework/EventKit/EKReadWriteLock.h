@class NSObject;
@protocol OS_dispatch_queue;

@interface EKReadWriteLock : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithName:(const char *)a0;
- (void)performWithWriteLock:(id /* block */)a0;
- (void)performWithReadLock:(id /* block */)a0;
- (void).cxx_destruct;

@end
