@class NSString, NSDictionary;

@interface _LSPersonaDatabase : NSObject <UMUserPersonaUpdateObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _uncachedCalloutLock;
    BOOL _registered;
    NSDictionary *_cachedBundleIDToPersonasMap;
    NSString *_cachedSystemPersonaIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)getUncachedBundleIDToPersonasMap:(id *)a0 systemPersonaIdentifier:(id *)a1;
- (void)registerWithUserManager;
- (id)getBundleIDToPersonasMap;
- (id)getSystemPersonaIdentifier;
- (id)personaIdentifiersForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)getCachedBundleIDToPersonasMap:(id *)a0 systemPersonaIdentifier:(id *)a1;
- (void)personaListDidUpdate;
- (BOOL)personaListContainsSystemPersona:(id)a0;
- (void)registerWithUserManagerForAttempt:(unsigned long long)a0 maxAttempts:(unsigned long long)a1;
- (id)initPrivately;

@end
