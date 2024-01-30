@class NSEntityDescription, NSSQLStoreMappingGenerator, NSMutableDictionary, NSSQLOptLockKey, NSMutableArray, NSSQLEntity_DerivedAttributesExtension, NSString, NSKnownKeysMappingStrategy, NSSQLEntityKey, NSSQLModel, NSSQLPrimaryKey, NSArray;

@interface NSSQLEntity : NSStoreMapping {
    NSSQLModel *_model;
    NSEntityDescription *_entityDescription;
    NSString *_tableName;
    NSMutableDictionary *_properties;
    NSArray *_propertyAllCache;
    NSArray *_propertiesAllToManysCache;
    NSArray *_propertyManyToManyCache;
    NSMutableArray *_columnsToFetch;
    NSMutableArray *_ekColumns;
    NSMutableArray *_fkColumns;
    NSMutableArray *_fokColumns;
    NSMutableArray *_attrColumns;
    NSMutableArray *_virtualFKs;
    NSSQLPrimaryKey *_primaryKey;
    NSSQLEntityKey *_entityKey;
    NSSQLOptLockKey *_optLockKey;
    NSMutableArray *_subentities;
    NSSQLEntity *_superentity;
    NSSQLEntity *_rootEntity;
    NSSQLStoreMappingGenerator *_mappingGenerator;
    unsigned int _entityID;
    unsigned int _subentityMaxID;
    struct _NSRange { unsigned long long location; unsigned long long length; } _toOneRange;
    NSMutableArray *_uniqueProperties;
    NSMutableArray *_multicolumnUniquenessConstraints;
    void *_fetch_entity_plan;
    NSMutableDictionary *_rtreeIndices;
    NSKnownKeysMappingStrategy *_propertyMapping;
    void *_odiousHashHackStorage;
    NSMutableArray *_derivedAttributes;
    NSSQLEntity_DerivedAttributesExtension *_derivedAttributeExtension;
    struct __sqlentityFlags { unsigned char _hasAttributesWithExternalDataReferences : 1; unsigned char _hasAttributesWithFileBackedFutures : 1; unsigned int _reserved : 30; } _sqlentityFlags;
}

- (id)initWithModel:(id)a0 entityDescription:(id)a1;
- (id)tableName;
- (id)entityDescription;
- (id)externalName;
- (id)attributeColumns;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)toManyRelationships;
- (id)description;
- (id)foreignEntityKeyColumns;
- (id)model;
- (id)manyToManyRelationships;
- (id)rootEntity;
- (id)foreignOrderKeyColumns;
- (id)foreignKeyColumns;
- (id)name;
- (void)dealloc;
- (id)attributes;

@end
