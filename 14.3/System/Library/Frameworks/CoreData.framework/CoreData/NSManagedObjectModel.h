@class NSArray, NSDictionary, NSSet, _PFVMData, NSMutableDictionary;

@interface NSManagedObjectModel : NSObject <NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration> {
    _PFVMData *_dataForOptimization;
    id *_optimizationHints;
    id *_additionalPrivateIvars;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_configurations;
    NSMutableDictionary *_fetchRequestTemplates;
    NSSet *_versionIdentifiers;
    struct __managedObjectModelFlags { unsigned char _isInUse : 1; unsigned char _isImmutable : 1; unsigned char _isOptimizedForEncoding : 1; unsigned char _hasEntityWithConstraints : 1; unsigned char _skipUserInfoTombstones : 1; unsigned int _reservedEntityDescription : 27; } _managedObjectModelFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setModelsReferenceIDOffset:) long long _modelsReferenceIDOffset;
@property (readonly, copy) NSDictionary *entitiesByName;
@property (retain) NSArray *entities;
@property (readonly) NSArray *configurations;
@property (retain) NSDictionary *localizationDictionary;
@property (readonly, copy) NSDictionary *fetchRequestTemplatesByName;
@property (copy) NSSet *versionIdentifiers;
@property (readonly, copy) NSDictionary *entityVersionHashesByName;

+ (id)_modelPathsFromBundles:(id)a0;
+ (id)modelByMergingModels:(id)a0;
+ (void)_deepCollectEntitiesInArray:(id)a0 entity:(id)a1;
+ (id)modelByMergingModels:(id)a0 forStoreMetadata:(id)a1;
+ (id)mergedModelFromBundles:(id)a0 forStoreMetadata:(id)a1;
+ (id)versionsHashesForModelAtURL:(id)a0 error:(id *)a1;
+ (BOOL)versionHashes:(id)a0 compatibleWithStoreMetadata:(id)a1;
+ (id)_newModelFromOptimizedEncoding:(id)a0 error:(id *)a1;
+ (long long)_debugOptimizedModelLayout;
+ (id)mergedModelFromBundles:(id)a0;

- (BOOL)isEditable;
- (void)_createCachesAndOptimizeState;
- (id)immutableCopy;
- (id)versionHash;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)fetchRequestFromTemplateWithName:(id)a0 substitutionVariables:(id)a1;
- (id)initWithContentsOfURL:(id)a0;
- (void)_skipUserInfoTombstones:(BOOL)a0;
- (id)init;
- (BOOL)_hasEntityWithUniquenessConstraints;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isOptimizedForEncoding;
- (BOOL)_hasEntityWithDerivedAttribute;
- (id)_entityVersionHashesDigestFrom:(id)a0;
- (id)_entityForName:(id)a0;
- (id)_modelForVersionHashes:(id)a0;
- (void)dealloc;
- (id)_precomputedKeysForEntity:(id)a0;
- (id)_sortedEntitiesForConfiguration:(id)a0;
- (void)setFetchRequestTemplate:(id)a0 forName:(id)a1;
- (void)_removeEntities:(id)a0 fromConfiguration:(id)a1;
- (void)_markTombstones;
- (void)setEntities:(id)a0 forConfiguration:(id)a1;
- (void)_unmarkTombstones;
- (void)_addVersionIdentifiers:(id)a0;
- (void)_setIsEditable:(BOOL)a0;
- (id)_entitiesByVersionHash;
- (unsigned long long)hash;
- (id)_localizationPolicy;
- (id)initWithContentsOfURL:(id)a0 forStoreMetadata:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_configurationsByName;
- (id)description;
- (void)_addEntity:(id)a0;
- (BOOL)_hasPrecomputedKeyOrder;
- (void)_flattenProperties;
- (BOOL)isEqual:(id)a0;
- (void)_traverseTombstonesAndMark:(BOOL)a0;
- (void)_finalizeIndexes;
- (void)_stripForMigration;
- (void)_removeEntity:(id)a0;
- (BOOL)_isConfiguration:(id)a0 inStyle:(unsigned long long)a1 compatibleWithStoreMetadata:(id)a2;
- (void)_removeEntityNamed:(id)a0;
- (BOOL)isConfiguration:(id)a0 compatibleWithStoreMetadata:(id)a1;
- (void)_addEntities:(id)a0 toConfiguration:(id)a1;
- (id)_versionIdentifiersAsArray;
- (void)_restoreValidation;
- (void)_setIsEditable:(BOOL)a0 optimizationStyle:(unsigned long long)a1;
- (id)_entityVersionHashesByNameInStyle:(unsigned long long)a0;
- (id)_initWithContentsOfURL:(id)a0 options:(unsigned long long)a1;
- (id)_initWithEntities:(id)a0;
- (void)_setLocalizationPolicy:(id)a0;
- (id)fetchRequestTemplateForName:(id)a0;
- (id)initWithContentsOfOptimizedURL:(id)a0;
- (void)_throwIfNotEditable;
- (id)_optimizedEncoding:(id *)a0;
- (id)entitiesForConfiguration:(id)a0;
- (BOOL)_isSkippingUserInfoTombstones;
- (void)encodeWithCoder:(id)a0;
- (id)_entityVersionHashesDigest;

@end
