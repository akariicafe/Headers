@class NSMutableSet;

@interface UISnapshottingAssertionManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
    NSMutableSet *_heldAssertions;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)withLock:(id /* block */)a0;
- (void)relinquishAssertion:(id)a0;
- (id)acquireNewAssertion;
- (void)executeIfNoActiveAssertions:(id /* block */)a0;
- (id)_init;

@end
