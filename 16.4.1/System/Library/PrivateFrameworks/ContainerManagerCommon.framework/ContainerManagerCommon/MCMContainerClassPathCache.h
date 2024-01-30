@class NSString, NSMutableDictionary;

@interface MCMContainerClassPathCache : NSObject <MCMUserIdentityCacheObserver> {
    NSMutableDictionary *_lookup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lookupLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userIdentityCache:(id)a0 didInvalidateUserIdentity:(id)a1;
- (id)containerClassPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 typeClass:(Class)a2;
- (void)flush;
- (id)_lock_containerClassPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 typeClass:(Class)a2;
- (void)userIdentityCache:(id)a0 didAddUserIdentity:(id)a1;
- (id)containerClassPathWithURL:(id)a0 reference:(id)a1;
- (id)referenceForPOSIXUser:(id)a0;
- (void)_lock_flush;
- (id)containerClassPathForContainerIdentity:(id)a0 typeClass:(Class)a1;
- (id)init;
- (void).cxx_destruct;

@end
