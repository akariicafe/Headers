@class NSUserDefaults;

@interface AXAssetAssertionStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSUserDefaults *defaults;

+ (id)store;

- (void).cxx_destruct;
- (void)_performWithLock:(id /* block */)a0;
- (id)_init;
- (void)_mutateAssertionsForAssetType:(id)a0 assertions:(id)a1 mutationBlock:(id /* block */)a2;
- (void)_mutateAssetAssertions:(id /* block */)a0;
- (void)requestAssertion:(id)a0;
- (void)discardAssertion:(id)a0;
- (void)discardAllAssertionsOfType:(id)a0 heldByClient:(id)a1;
- (void)discardAllAssertionsOfType:(id)a0;
- (id)heldAssertionsForAssetType:(id)a0;

@end
