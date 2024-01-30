@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface MIKeychainAccessGroupTracker : NSObject

@property (retain, nonatomic) NSCountedSet *refs;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *q;

+ (id)sharedTracker;

- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;
- (id)_keychainAccessGroupsForApp:(id)a0 error:(id *)a1;
- (id)_keychainAccessGroupsForBundle:(id)a0 error:(id *)a1;
- (BOOL)_onQueue_addReferencesForBundle:(id)a0 error:(id *)a1;
- (void)_onQueue_discoverReferences;
- (BOOL)_onQueue_removeReferencesForBundle:(id)a0 error:(id *)a1;
- (BOOL)_onQueue_updateReferencesWithOldBundle:(id)a0 newBundle:(id)a1 error:(id *)a2;
- (BOOL)_removeGroupsWithError:(id)a0 error:(id *)a1;
- (BOOL)addReferencesForBundle:(id)a0 error:(id *)a1;
- (void)reconcile;
- (BOOL)removeReferencesForBundle:(id)a0 error:(id *)a1;
- (BOOL)updateReferencesWithOldBundle:(id)a0 newBundle:(id)a1 error:(id *)a2;

@end
