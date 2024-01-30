@class NSString, NSSet, FBWorkspaceIdentity, BSSimpleAssertion, RBSProcessHandle;

@interface FBWorkspaceEventDispatcherRegistration : NSObject <BSInvalidatable> {
    BSSimpleAssertion *_underlyingAssertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSSet *_lock_remnants;
}

@property (readonly, copy, nonatomic) FBWorkspaceIdentity *identity;
@property (readonly, nonatomic) RBSProcessHandle *processHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithIdentity:(id)a0 processHandle:(id)a1 underlyingAssertion:(id)a2;
- (id)consumeRemnantsPassingTest:(id /* block */)a0;
- (void)noteHandshakeWithRemnants:(id)a0;
- (void)invalidate;

@end
