@class NSMutableArray, NSString, RBSTarget, RBSAssertion;

@interface BKSAssertion : NSObject <RBSAssertionObserving> {
    RBSAssertion *_internalAssertion;
    id /* block */ _acquisitionHandler;
    id /* block */ _invalidationHandler;
    RBSTarget *_target;
    NSMutableArray *_attributes;
    NSString *_name;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL valid;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_internalAssertion;
- (id)_target;
- (void)_lock_setAttributes:(id)a0;
- (id)init;
- (void)_invalidateSynchronously:(BOOL)a0;
- (void).cxx_destruct;
- (void)_setAttributes:(id)a0;
- (id /* block */)_lock_acquisitionHandler;
- (unsigned long long)_bksErrorForRBSAssertionError:(unsigned long long)a0;
- (void)_lock_setName:(id)a0;
- (id)_lock_internalAssertion;
- (void)dealloc;
- (void)_lock_setInternalAssertion:(id)a0;
- (void)_acquireAsynchronously;
- (void)_lock:(id /* block */)a0;
- (id)_lock_attributes;
- (void)_setTarget:(id)a0;
- (id)_initWithName:(id)a0 handler:(id /* block */)a1;
- (id /* block */)_acquisitionHandler;
- (void)_lock_reaquireAssertion;
- (void)assertionWillInvalidate:(id)a0;
- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (id)_lock_name;
- (id)_attributes;
- (BOOL)acquire;
- (void)invalidate;

@end
