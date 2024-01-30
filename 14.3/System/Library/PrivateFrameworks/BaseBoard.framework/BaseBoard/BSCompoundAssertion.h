@class NSSet, NSOrderedSet, NSString, NSMutableOrderedSet;

@interface BSCompoundAssertion : NSObject <BSCompoundAssertionState, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
    BOOL _syncLock_invalid;
    id /* block */ _syncLock_block;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    NSMutableOrderedSet *_dataLock_acquisitions;
    NSString *_dataLock_identifierPrefix;
}

@property (readonly) NSSet *reasons;
@property (readonly) NSOrderedSet *orderedReasons;
@property (readonly, getter=isActive) BOOL active;
@property (readonly) NSSet *context;
@property (readonly) NSOrderedSet *orderedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assertionWithIdentifier:(id)a0;
+ (id)new;
+ (id)assertionWithIdentifier:(id)a0 stateDidChangeHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)acquireForReason:(id)a0;
- (id)acquireForReason:(id)a0 withContext:(id)a1;
- (void)invalidate;

@end
