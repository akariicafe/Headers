@class NSString, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface ACDKeychainItem : NSObject {
    NSMutableDictionary *_properties;
    NSMutableSet *_dirtyProperties;
}

@property (readonly, nonatomic) const struct __CFData { } *persistentRef;
@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *accessGroup;
@property (copy, nonatomic) NSString *accessibility;
@property (nonatomic) BOOL synchronizable;
@property (readonly, nonatomic) BOOL useDataProtectionKeychain;
@property (readonly, nonatomic) BOOL hasCustomAccessControl;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) long long version;

+ (id)new;

- (BOOL)save:(id *)a0;
- (void)_markPropertyDirty:(id)a0;
- (BOOL)_setMetadata:(id)a0 withError:(id *)a1;
- (void)migrateToKeyBagFromLegacy;
- (void)_clearDirtyProperties;
- (id)initWithPersistentRef:(const struct __CFData { } *)a0;
- (void)reload;
- (id)_metadataWithError:(id *)a0;
- (id)debugDescription;
- (void)dealloc;
- (void)_reloadProperties;
- (id)init;
- (id)_modifiedProperties;
- (id)description;
- (id)initWithPersistentRef:(const struct __CFData { } *)a0 properties:(id)a1;
- (void).cxx_destruct;
- (void)_setValue:(id)a0 forProperty:(id)a1;

@end
