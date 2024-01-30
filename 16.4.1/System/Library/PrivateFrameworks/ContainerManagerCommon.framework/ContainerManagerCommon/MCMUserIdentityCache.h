@class NSObject, MCMUserIdentity, NSDictionary, NSMutableDictionary, NSHashTable, NSSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MCMUserIdentityCache : NSObject <MCMUserIdentityCache> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_flushQueue;
    NSObject<OS_xpc_object> *_listener;
}

@property (nonatomic) BOOL cacheInvalid;
@property (readonly, nonatomic) NSDictionary *lock_bundleToDataSeparatedIdentitiesMap;
@property (readonly, nonatomic) NSDictionary *lock_personaUniqueStringToUserIdentityMap;
@property (readonly, nonatomic) NSDictionary *lock_personaIDToUserIdentityMap;
@property (readonly, nonatomic) MCMUserIdentity *lock_userIdentityForPersonalPersona;
@property (readonly, nonatomic) MCMUserIdentity *lock_userIdentityForUnspecificPersona;
@property (readonly, nonatomic) NSMutableDictionary *lock_managedPathRegistryForUserIdentity;
@property (readonly, nonatomic) NSMutableDictionary *lock_libraryRepairForUserIdentity;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSSet *previousUserIdentities;
@property (nonatomic) unsigned long long savedGeneration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)personasAreSupported;
+ (id)defaultUserIdentity;
+ (id)globalBundleUserIdentity;
+ (id)globalSystemUserIdentity;
+ (id)userIdentityWithPersonaAttributes:(id)a0;
+ (id)userIdentityWithPersonaAttributes:(id)a0 POSIXUser:(id)a1 forceUnspecific:(BOOL)a2;
+ (id)userIdentityWithPersonaAttributes:(id)a0 forceUnspecific:(BOOL)a1;

- (void)addObserver:(id)a0;
- (void)flush;
- (void)_lock_flush;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)userIdentityForLegacyMobileUser;
- (void)_lock_flushAndRepopulateWithUserIdentities:(id)a0;
- (void)_lock_resync;
- (BOOL)_lock_resync_fromUserPersonaAttributes:(id)a0;
- (id)_lock_userIdentitiesForBundleIdentifier:(id)a0;
- (id)_lock_userIdentityForCurrentUserWithPersonaUniqueString:(id)a0;
- (void)_notifyObserversOfChangesWithUserIdentities:(id)a0;
- (void)_refreshFromUserManagementIfNecessary;
- (id)allAccessibleUserIdentities;
- (id)defaultUserIdentity;
- (void)flushAndRepopulateWithUserIdentities:(id)a0;
- (void)forEachAccessibleUserIdentitySynchronouslyExecuteBlock:(id /* block */)a0;
- (id)globalBundleUserIdentity;
- (id)globalSystemUserIdentity;
- (id)libraryRepairForUserIdentity:(id)a0;
- (id)managedUserPathRegistryForUserIdentity:(id)a0;
- (id)personaUniqueStringForCurrentContext;
- (id)unspecificUserIdentity;
- (id)userIdentitiesForBundleIdentifier:(id)a0;
- (id)userIdentityForClient:(struct container_client { char *x0; unsigned int x1; char *x2; unsigned int x3; unsigned int x4; struct { unsigned int x0[8]; } x5; int x6; BOOL x7; BOOL x8; BOOL x9; id x10; } *)a0 error:(id *)a1;
- (id)userIdentityForCurrentContext;
- (id)userIdentityForCurrentUserWithPersonaUniqueString:(id)a0;
- (id)userIdentityForPersonaUniqueString:(id)a0 POSIXUser:(id)a1;
- (id)userIdentityForPersonalPersona;
- (id)userIdentityForPersonalPersonaWithPOSIXUser:(id)a0;
- (id)userIdentityWithPersonaID:(unsigned int)a0;

@end
