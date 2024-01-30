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

- (id)configurationName;
- (id)initWithManagedObjectModel:(id)a0 configurationName:(id)a1 brokenHashVersion:(unsigned long long)a2;
- (BOOL)_generateModel:(id)a0 error:(id *)a1;
- (id)entityNamed:(id)a0;
- (id)entityForID:(unsigned long long)a0;
- (id)initWithManagedObjectModel:(id)a0 configurationName:(id)a1;
- (id)initWithManagedObjectModel:(id)a0 configurationName:(id)a1 retainHashHack:(BOOL)a2;
- (void)dealloc;
- (id)managedObjectModel;

@end
