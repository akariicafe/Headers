@class HDSPSyncedDefaultsVersionInfo, NSArray, NSSet, NSDictionary;

@interface HDSPSyncedDefaultsConfiguration : NSObject {
    NSDictionary *_keySetMap;
}

@property (readonly, nonatomic) HDSPSyncedDefaultsVersionInfo *versionInfo;
@property (readonly, nonatomic) NSArray *keySets;
@property (readonly, nonatomic) NSSet *allKeysToPersist;
@property (readonly, nonatomic) NSSet *allKeysToSync;
@property (readonly, nonatomic) NSSet *allPerGizmoKeys;
@property (readonly, nonatomic) NSDictionary *allPerGizmoDefaultValues;

- (id)_keySetForKey:(id)a0;
- (id)filteredKeySetsWithKeysToSync:(id)a0;
- (id)_createKeySetMapForKeySets:(id)a0;
- (BOOL)shouldPersistKey:(id)a0;
- (id)initWithVersionInfo:(id)a0 keySets:(id)a1;
- (void).cxx_destruct;
- (id)keySetForIdentifier:(id)a0;
- (BOOL)shouldSyncKey:(id)a0;
- (id)_accumulateKeysWithBlock:(id /* block */)a0 includeVersionInfo:(BOOL)a1;

@end
