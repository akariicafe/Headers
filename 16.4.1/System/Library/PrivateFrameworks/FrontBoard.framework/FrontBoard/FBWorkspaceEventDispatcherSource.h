@class NSString, NSSet, BSSimpleAssertion, RBSProcessHandle;

@interface FBWorkspaceEventDispatcherSource : NSObject <BSInvalidatable> {
    BSSimpleAssertion *_underlyingAssertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSSet *_lock_remnants;
}

@property (readonly, nonatomic) RBSProcessHandle *processHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)consumeRemnantsPassingTest:(id /* block */)a0;
- (void)dealloc;
- (void)noteHandshakeWithRemnants:(id)a0;
- (id)_initWithProcessHandle:(id)a0 underlyingAssertion:(id)a1;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
