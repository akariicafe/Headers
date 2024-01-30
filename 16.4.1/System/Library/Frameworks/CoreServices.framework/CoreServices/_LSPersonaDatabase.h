@class NSDictionary, NSString;

@interface _LSPersonaDatabase : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _uncachedCalloutLock;
    NSDictionary *_cachedBundleIDToPersonasMap;
    NSString *_cachedSystemPersonaUniqueString;
    NSString *_cachedPersonalPersonaUniqueString;
    unsigned long long _userManagementGenerationNumber;
}

- (void)personaListDidUpdate;
- (void)refreshFromUserManagementIfNecessary;
- (void)getCachedBundleIDToPersonasWithAttributesMap:(id *)a0 systemPersonaUniqueString:(id *)a1 personalPersonaUniqueString:(id *)a2;
- (void)getUncachedBundleIDToPersonasWithAttributesMap:(id *)a0 systemPersonaUniqueString:(id *)a1 personalPersonaUniqueString:(id *)a2;
- (id)getBundleIDToPersonasWithAttributesMap;
- (id)initPrivately;
- (void).cxx_destruct;

@end
