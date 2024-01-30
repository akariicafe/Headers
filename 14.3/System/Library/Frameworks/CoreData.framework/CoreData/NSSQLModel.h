@class NSString, NSManagedObjectModel, NSKnownKeysDictionary, NSMutableArray;

@interface NSSQLModel : NSStoreMapping {
    NSString *_configuration;
    NSManagedObjectModel *_mom;
    NSKnownKeysDictionary *_entitiesByName;
    NSMutableArray *_entities;
    id *_entityDescriptionToSQLMap;
    unsigned long long _brokenHashVersion;
    BOOL _retainLeopardStyleDictionaries;
    BOOL _modelHasPrecomputedKeyOrder;
    BOOL _hasVirtualToOnes;
    unsigned int _entityIDOffset;
    unsigned int _lastEntityID;
}

- (id)managedObjectModel;
- (id)configurationName;
- (id)entities;
- (unsigned int)_lastEntityID;
- (BOOL)_useSnowLeopardStyleHashing;
- (void)dealloc;
- (id)_precomputedKeyOrderForEntity:(id)a0;
- (id)initWithManagedObjectModel:(id)a0 configurationName:(id)a1 brokenHashVersion:(unsigned long long)a2;
- (unsigned int)_entityOffset;
- (BOOL)_useLeopardStyleHashing;
- (void)_addIndexedEntity:(id)a0;
- (id)entityForID:(unsigned long long)a0;
- (id)_entityMapping;
- (id)entitiesByName;
- (id)_sqlEntityWithRenamingIdentifier:(id)a0;
- (BOOL)_retainHashHack;
- (id)initWithManagedObjectModel:(id)a0 configurationName:(id)a1 retainHashHack:(BOOL)a2;
- (id)entityNamed:(id)a0;
- (void)_recordHasVirtualToOnes;
- (void)finalize;
- (BOOL)_modelHasPrecomputedKeyOrder;
- (id)initWithManagedObjectModel:(id)a0 configurationName:(id)a1;
- (unsigned long long)entityIDForName:(id)a0;
- (BOOL)_generateModel:(id)a0 error:(id *)a1;
- (id)initWithManagedObjectModel:(id)a0 configurationName:(id)a1 retainHashHack:(BOOL)a2 brokenHashVersion:(unsigned long long)a3;

@end
