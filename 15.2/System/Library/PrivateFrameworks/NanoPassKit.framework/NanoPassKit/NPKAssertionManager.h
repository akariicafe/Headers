@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface NPKAssertionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSHashTable *acquiredAssertions;

+ (id)sharedManager;

- (void)addAssertion:(id)a0;
- (void)removeAssertion:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_errorWithUnderlyingError:(id)a0;
- (id)acquiredAssertionWithType:(unsigned long long)a0;
- (void)_queue_acquireAssertionWithType:(unsigned long long)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)_queue_invalidateAssertionWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)containsAssertionWithType:(unsigned long long)a0;
- (void)acquireAssertionWithType:(unsigned long long)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)invalidateAssertionWithType:(unsigned long long)a0 completion:(id /* block */)a1;

@end
